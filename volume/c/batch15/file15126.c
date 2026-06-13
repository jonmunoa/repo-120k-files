// fichero 15126 -- macros y constantes
#define LIMITE_15126 15226
#define FACTOR_15126 2

int aplicar_limite15126(int valor) {
    if (valor > LIMITE_15126) return LIMITE_15126;
    return valor * FACTOR_15126;
}
