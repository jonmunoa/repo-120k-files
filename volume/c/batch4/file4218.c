// fichero 4218 -- macros y constantes -- MODIFICADO
#define LIMITE_4218 4418
#define FACTOR_4218 5

int aplicar_limite4218(int valor) {
    if (valor > LIMITE_4218) return LIMITE_4218;
    return valor * FACTOR_4218;
}
