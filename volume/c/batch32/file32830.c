// fichero 32830 -- macros y constantes
#define LIMITE_32830 32930
#define FACTOR_32830 1

int aplicar_limite32830(int valor) {
    if (valor > LIMITE_32830) return LIMITE_32830;
    return valor * FACTOR_32830;
}
