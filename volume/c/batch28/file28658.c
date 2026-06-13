// fichero 28658 -- macros y constantes
#define LIMITE_28658 28758
#define FACTOR_28658 4

int aplicar_limite28658(int valor) {
    if (valor > LIMITE_28658) return LIMITE_28658;
    return valor * FACTOR_28658;
}
