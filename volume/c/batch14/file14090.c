// fichero 14090 -- macros y constantes
#define LIMITE_14090 14190
#define FACTOR_14090 1

int aplicar_limite14090(int valor) {
    if (valor > LIMITE_14090) return LIMITE_14090;
    return valor * FACTOR_14090;
}
