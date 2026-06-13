// fichero 4218 -- macros y constantes
#define LIMITE_4218 4318
#define FACTOR_4218 4

int aplicar_limite4218(int valor) {
    if (valor > LIMITE_4218) return LIMITE_4218;
    return valor * FACTOR_4218;
}
