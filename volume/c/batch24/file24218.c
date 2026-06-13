// fichero 24218 -- macros y constantes
#define LIMITE_24218 24318
#define FACTOR_24218 4

int aplicar_limite24218(int valor) {
    if (valor > LIMITE_24218) return LIMITE_24218;
    return valor * FACTOR_24218;
}
