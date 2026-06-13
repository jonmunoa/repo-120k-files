// fichero 14666 -- macros y constantes
#define LIMITE_14666 14766
#define FACTOR_14666 2

int aplicar_limite14666(int valor) {
    if (valor > LIMITE_14666) return LIMITE_14666;
    return valor * FACTOR_14666;
}
