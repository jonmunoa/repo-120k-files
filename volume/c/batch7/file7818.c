// fichero 7818 -- macros y constantes -- MODIFICADO
#define LIMITE_7818 8018
#define FACTOR_7818 5

int aplicar_limite7818(int valor) {
    if (valor > LIMITE_7818) return LIMITE_7818;
    return valor * FACTOR_7818;
}
