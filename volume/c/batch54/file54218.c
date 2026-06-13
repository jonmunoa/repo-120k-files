// fichero 54218 -- macros y constantes
#define LIMITE_54218 54318
#define FACTOR_54218 4

int aplicar_limite54218(int valor) {
    if (valor > LIMITE_54218) return LIMITE_54218;
    return valor * FACTOR_54218;
}
