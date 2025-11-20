package main

import (
    "fmt"
    "os"
)

func main() {
    // Abrir/criar arquivo telas.cfg
    file, err := os.Create("telas.cfg")
    if err != nil {
        fmt.Println("Erro ao criar arquivo:", err)
        return
    }
    defer file.Close()

    // Conteúdo do cfg
    cfg := `# Configuração de telas de celular
normal_pequeno.width = 6.2
normal_pequeno.height = 11.0

normal_medio.width = 6.8
normal_medio.height = 12.1

normal_grande.width = 7.4
normal_grande.height = 13.2

grande_moderno.width = 7.8
grande_moderno.height = 14.4

grande_xl.width = 8.1
grande_xl.height = 14.8

extra_grande.width = 8.5
extra_grande.height = 15.0
`

    // Escrever no arquivo
    _, err = file.WriteString(cfg)
    if err != nil {
        fmt.Println("Erro ao escrever no arquivo:", err)
        return
    }

    fmt.Println("Arquivo telas.cfg gerado com sucesso!")
}
