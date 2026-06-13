// fichero 8598 -- macros y constantes
#define LIMITE_8598 8698
#define FACTOR_8598 4

int aplicar_limite8598(int valor) {
    if (valor > LIMITE_8598) return LIMITE_8598;
    return valor * FACTOR_8598;
}
