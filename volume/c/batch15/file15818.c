// fichero 15818 -- macros y constantes -- MODIFICADO
#define LIMITE_15818 16018
#define FACTOR_15818 5

int aplicar_limite15818(int valor) {
    if (valor > LIMITE_15818) return LIMITE_15818;
    return valor * FACTOR_15818;
}
