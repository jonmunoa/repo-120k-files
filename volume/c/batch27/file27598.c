// fichero 27598 -- macros y constantes
#define LIMITE_27598 27698
#define FACTOR_27598 4

int aplicar_limite27598(int valor) {
    if (valor > LIMITE_27598) return LIMITE_27598;
    return valor * FACTOR_27598;
}
