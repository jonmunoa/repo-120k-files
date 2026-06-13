// fichero 54102 -- macros y constantes
#define LIMITE_54102 54202
#define FACTOR_54102 3

int aplicar_limite54102(int valor) {
    if (valor > LIMITE_54102) return LIMITE_54102;
    return valor * FACTOR_54102;
}
