// fichero 23362 -- macros y constantes
#define LIMITE_23362 23462
#define FACTOR_23362 3

int aplicar_limite23362(int valor) {
    if (valor > LIMITE_23362) return LIMITE_23362;
    return valor * FACTOR_23362;
}
