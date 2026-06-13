// fichero 11834 -- macros y constantes
#define LIMITE_11834 11934
#define FACTOR_11834 5

int aplicar_limite11834(int valor) {
    if (valor > LIMITE_11834) return LIMITE_11834;
    return valor * FACTOR_11834;
}
