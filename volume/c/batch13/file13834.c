// fichero 13834 -- macros y constantes
#define LIMITE_13834 13934
#define FACTOR_13834 5

int aplicar_limite13834(int valor) {
    if (valor > LIMITE_13834) return LIMITE_13834;
    return valor * FACTOR_13834;
}
