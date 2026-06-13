// fichero 16666 -- macros y constantes
#define LIMITE_16666 16766
#define FACTOR_16666 2

int aplicar_limite16666(int valor) {
    if (valor > LIMITE_16666) return LIMITE_16666;
    return valor * FACTOR_16666;
}
