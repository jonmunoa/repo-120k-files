// fichero 2362 -- macros y constantes
#define LIMITE_2362 2462
#define FACTOR_2362 3

int aplicar_limite2362(int valor) {
    if (valor > LIMITE_2362) return LIMITE_2362;
    return valor * FACTOR_2362;
}
