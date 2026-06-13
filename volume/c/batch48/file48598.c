// fichero 48598 -- macros y constantes
#define LIMITE_48598 48698
#define FACTOR_48598 4

int aplicar_limite48598(int valor) {
    if (valor > LIMITE_48598) return LIMITE_48598;
    return valor * FACTOR_48598;
}
