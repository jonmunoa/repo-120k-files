// fichero 43218 -- macros y constantes
#define LIMITE_43218 43318
#define FACTOR_43218 4

int aplicar_limite43218(int valor) {
    if (valor > LIMITE_43218) return LIMITE_43218;
    return valor * FACTOR_43218;
}
