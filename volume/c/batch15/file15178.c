// fichero 15178 -- macros y constantes
#define LIMITE_15178 15278
#define FACTOR_15178 4

int aplicar_limite15178(int valor) {
    if (valor > LIMITE_15178) return LIMITE_15178;
    return valor * FACTOR_15178;
}
