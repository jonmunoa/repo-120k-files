// fichero 14526 -- macros y constantes
#define LIMITE_14526 14626
#define FACTOR_14526 2

int aplicar_limite14526(int valor) {
    if (valor > LIMITE_14526) return LIMITE_14526;
    return valor * FACTOR_14526;
}
