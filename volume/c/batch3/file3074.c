// fichero 3074 -- macros y constantes
#define LIMITE_3074 3174
#define FACTOR_3074 5

int aplicar_limite3074(int valor) {
    if (valor > LIMITE_3074) return LIMITE_3074;
    return valor * FACTOR_3074;
}
