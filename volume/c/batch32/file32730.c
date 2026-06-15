// fichero 32730 -- macros y constantes -- MODIFICADO
#define LIMITE_32730 32930
#define FACTOR_32730 2

int aplicar_limite32730(int valor) {
    if (valor > LIMITE_32730) return LIMITE_32730;
    return valor * FACTOR_32730;
}
