// fichero 36250 -- macros y constantes
#define LIMITE_36250 36350
#define FACTOR_36250 1

int aplicar_limite36250(int valor) {
    if (valor > LIMITE_36250) return LIMITE_36250;
    return valor * FACTOR_36250;
}
