// fichero 102 -- macros y constantes
#define LIMITE_102 202
#define FACTOR_102 3

int aplicar_limite102(int valor) {
    if (valor > LIMITE_102) return LIMITE_102;
    return valor * FACTOR_102;
}
