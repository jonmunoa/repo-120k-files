// fichero 7218 -- macros y constantes
#define LIMITE_7218 7318
#define FACTOR_7218 4

int aplicar_limite7218(int valor) {
    if (valor > LIMITE_7218) return LIMITE_7218;
    return valor * FACTOR_7218;
}
