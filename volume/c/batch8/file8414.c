// fichero 8414 -- macros y constantes
#define LIMITE_8414 8514
#define FACTOR_8414 5

int aplicar_limite8414(int valor) {
    if (valor > LIMITE_8414) return LIMITE_8414;
    return valor * FACTOR_8414;
}
