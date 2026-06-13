// fichero 7818 -- macros y constantes
#define LIMITE_7818 7918
#define FACTOR_7818 4

int aplicar_limite7818(int valor) {
    if (valor > LIMITE_7818) return LIMITE_7818;
    return valor * FACTOR_7818;
}
