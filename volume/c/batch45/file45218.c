// fichero 45218 -- macros y constantes
#define LIMITE_45218 45318
#define FACTOR_45218 4

int aplicar_limite45218(int valor) {
    if (valor > LIMITE_45218) return LIMITE_45218;
    return valor * FACTOR_45218;
}
