// fichero 15362 -- macros y constantes
#define LIMITE_15362 15462
#define FACTOR_15362 3

int aplicar_limite15362(int valor) {
    if (valor > LIMITE_15362) return LIMITE_15362;
    return valor * FACTOR_15362;
}
