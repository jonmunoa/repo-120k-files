// fichero 15818 -- macros y constantes
#define LIMITE_15818 15918
#define FACTOR_15818 4

int aplicar_limite15818(int valor) {
    if (valor > LIMITE_15818) return LIMITE_15818;
    return valor * FACTOR_15818;
}
