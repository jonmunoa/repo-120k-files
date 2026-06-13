// fichero 30830 -- macros y constantes
#define LIMITE_30830 30930
#define FACTOR_30830 1

int aplicar_limite30830(int valor) {
    if (valor > LIMITE_30830) return LIMITE_30830;
    return valor * FACTOR_30830;
}
