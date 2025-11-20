#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define CMD_REBOOT 1
#define CMD_FASTBOOT 2
#define BATTERY_PATH "/sys/class/power_supply/BAT0/status"

#define CLEAR_SCREEN() printf("\033[2J\033[H")
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

const char* get_battery_status() {
    FILE *fp = fopen(BATTERY_PATH, "r");
    if (!fp) return "Unknown";
    static char status[32];
    if (fgets(status, sizeof(status), fp) != NULL) {
        status[strcspn(status, "\n")] = 0;
        fclose(fp);
        return status;
    }
    fclose(fp);
    return "Unknown";
}

void print_fastboot_ascii() {
    printf("      .--.\n");
    printf("     |o_o |\n");
    printf("     |:_/ |\n");
    printf("    //   \\ \\\n");
    printf("   (|     | )   ⚠️  EnzoOS Fastboot\n");
    printf("  /'\\_   _/`\\\n");
    printf("  \\___)=(___/\n");
}

void fastboot_screen() {
    CLEAR_SCREEN();
    print_fastboot_ascii();
    printf("\nBattery: %s\n\n", get_battery_status());
    printf("Commands:\n");
    printf("%d - Reboot device\n", CMD_REBOOT);
    printf("%d - Stay in Fastboot\n", CMD_FASTBOOT);
    printf("Enter command number: ");
}

void datamosh_effect() {
    const char* ascii_msg = 
        "      .--.\n"
        "     |o_o |\n"
        "     |:_/ |\n"
        "    //   \\ \\\n"
        "   (|     | )   ⚠️  No command\n"
        "  /'\\_   _/`\\\n"
        "  \\___)=(___/\n";

    for (int frame = 0; frame < 10; frame++) {
        CLEAR_SCREEN();
        for (int i = 0; ascii_msg[i]; i++) {
            if (rand() % 4 == 0) {
                char c = ascii_msg[i] ^ (rand() % 256);
                if (rand() % 2) printf(RED "%c" RESET, c);
                else printf(GREEN "%c" RESET, c);
            } else {
                putchar(ascii_msg[i]);
            }
        }
        printf("\nCommand not recognized!\n");
        printf("%d - Return to Fastboot\n", CMD_FASTBOOT);
        printf("%d - Reboot device\n", CMD_REBOOT);
        usleep(100000); // 0.1s
    }
}

void no_command_screen() {
    datamosh_effect();
}

int main() {
    srand(time(NULL));
    int choice;

    while (1) {
        fastboot_screen();
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            no_command_screen();
            scanf("%d", &choice);
        }

        switch (choice) {
            case CMD_REBOOT:
                printf("Rebooting EnzoOS...\n");
                sleep(2);
                system("reboot");
                break;
            case CMD_FASTBOOT:
                printf("Staying in Fastboot...\n");
                sleep(1);
                break;
            default:
                no_command_screen();
                break;
        }
    }
    return 0;
}
