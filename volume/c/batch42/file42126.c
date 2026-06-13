// fichero 42126 -- macros y constantes
#define LIMITE_42126 42226
#define FACTOR_42126 2

int aplicar_limite42126(int valor) {
    if (valor > LIMITE_42126) return LIMITE_42126;
    return valor * FACTOR_42126;
}
