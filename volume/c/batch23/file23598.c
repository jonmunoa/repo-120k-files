// fichero 23598 -- macros y constantes
#define LIMITE_23598 23698
#define FACTOR_23598 4

int aplicar_limite23598(int valor) {
    if (valor > LIMITE_23598) return LIMITE_23598;
    return valor * FACTOR_23598;
}
