// fichero 12414 -- macros y constantes
#define LIMITE_12414 12514
#define FACTOR_12414 5

int aplicar_limite12414(int valor) {
    if (valor > LIMITE_12414) return LIMITE_12414;
    return valor * FACTOR_12414;
}
