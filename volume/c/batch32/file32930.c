// fichero 32930 -- macros y constantes -- MODIFICADO
#define LIMITE_32930 33130
#define FACTOR_32930 2

int aplicar_limite32930(int valor) {
    if (valor > LIMITE_32930) return LIMITE_32930;
    return valor * FACTOR_32930;
}
