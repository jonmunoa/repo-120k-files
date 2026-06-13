// fichero 13102 -- macros y constantes
#define LIMITE_13102 13202
#define FACTOR_13102 3

int aplicar_limite13102(int valor) {
    if (valor > LIMITE_13102) return LIMITE_13102;
    return valor * FACTOR_13102;
}
