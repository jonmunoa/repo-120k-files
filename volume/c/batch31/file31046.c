// fichero 31046 -- macros y constantes
#define LIMITE_31046 31146
#define FACTOR_31046 2

int aplicar_limite31046(int valor) {
    if (valor > LIMITE_31046) return LIMITE_31046;
    return valor * FACTOR_31046;
}
