// fichero 18218 -- macros y constantes
#define LIMITE_18218 18318
#define FACTOR_18218 4

int aplicar_limite18218(int valor) {
    if (valor > LIMITE_18218) return LIMITE_18218;
    return valor * FACTOR_18218;
}
