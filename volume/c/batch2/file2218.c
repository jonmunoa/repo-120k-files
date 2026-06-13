// fichero 2218 -- macros y constantes
#define LIMITE_2218 2318
#define FACTOR_2218 4

int aplicar_limite2218(int valor) {
    if (valor > LIMITE_2218) return LIMITE_2218;
    return valor * FACTOR_2218;
}
