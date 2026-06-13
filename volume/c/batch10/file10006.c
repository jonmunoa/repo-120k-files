// fichero 10006 -- macros y constantes
#define LIMITE_10006 10106
#define FACTOR_10006 2

int aplicar_limite10006(int valor) {
    if (valor > LIMITE_10006) return LIMITE_10006;
    return valor * FACTOR_10006;
}
