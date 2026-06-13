// fichero 35362 -- macros y constantes
#define LIMITE_35362 35462
#define FACTOR_35362 3

int aplicar_limite35362(int valor) {
    if (valor > LIMITE_35362) return LIMITE_35362;
    return valor * FACTOR_35362;
}
