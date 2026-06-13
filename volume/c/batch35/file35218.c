// fichero 35218 -- macros y constantes
#define LIMITE_35218 35318
#define FACTOR_35218 4

int aplicar_limite35218(int valor) {
    if (valor > LIMITE_35218) return LIMITE_35218;
    return valor * FACTOR_35218;
}
