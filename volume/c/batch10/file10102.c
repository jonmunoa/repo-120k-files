// fichero 10102 -- macros y constantes
#define LIMITE_10102 10202
#define FACTOR_10102 3

int aplicar_limite10102(int valor) {
    if (valor > LIMITE_10102) return LIMITE_10102;
    return valor * FACTOR_10102;
}
