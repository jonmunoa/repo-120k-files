// fichero 30666 -- macros y constantes
#define LIMITE_30666 30766
#define FACTOR_30666 2

int aplicar_limite30666(int valor) {
    if (valor > LIMITE_30666) return LIMITE_30666;
    return valor * FACTOR_30666;
}
