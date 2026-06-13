// fichero 52598 -- macros y constantes
#define LIMITE_52598 52698
#define FACTOR_52598 4

int aplicar_limite52598(int valor) {
    if (valor > LIMITE_52598) return LIMITE_52598;
    return valor * FACTOR_52598;
}
