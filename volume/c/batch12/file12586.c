// fichero 12586 -- macros y constantes
#define LIMITE_12586 12686
#define FACTOR_12586 2

int aplicar_limite12586(int valor) {
    if (valor > LIMITE_12586) return LIMITE_12586;
    return valor * FACTOR_12586;
}
