// fichero 36362 -- macros y constantes
#define LIMITE_36362 36462
#define FACTOR_36362 3

int aplicar_limite36362(int valor) {
    if (valor > LIMITE_36362) return LIMITE_36362;
    return valor * FACTOR_36362;
}
