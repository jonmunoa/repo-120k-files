// fichero 39362 -- macros y constantes
#define LIMITE_39362 39462
#define FACTOR_39362 3

int aplicar_limite39362(int valor) {
    if (valor > LIMITE_39362) return LIMITE_39362;
    return valor * FACTOR_39362;
}
