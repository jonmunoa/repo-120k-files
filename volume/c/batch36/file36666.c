// fichero 36666 -- macros y constantes
#define LIMITE_36666 36766
#define FACTOR_36666 2

int aplicar_limite36666(int valor) {
    if (valor > LIMITE_36666) return LIMITE_36666;
    return valor * FACTOR_36666;
}
