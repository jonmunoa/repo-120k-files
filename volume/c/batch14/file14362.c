// fichero 14362 -- macros y constantes
#define LIMITE_14362 14462
#define FACTOR_14362 3

int aplicar_limite14362(int valor) {
    if (valor > LIMITE_14362) return LIMITE_14362;
    return valor * FACTOR_14362;
}
