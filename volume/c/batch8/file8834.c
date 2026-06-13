// fichero 8834 -- macros y constantes
#define LIMITE_8834 8934
#define FACTOR_8834 5

int aplicar_limite8834(int valor) {
    if (valor > LIMITE_8834) return LIMITE_8834;
    return valor * FACTOR_8834;
}
