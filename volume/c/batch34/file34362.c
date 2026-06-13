// fichero 34362 -- macros y constantes
#define LIMITE_34362 34462
#define FACTOR_34362 3

int aplicar_limite34362(int valor) {
    if (valor > LIMITE_34362) return LIMITE_34362;
    return valor * FACTOR_34362;
}
