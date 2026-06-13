// fichero 12834 -- macros y constantes
#define LIMITE_12834 12934
#define FACTOR_12834 5

int aplicar_limite12834(int valor) {
    if (valor > LIMITE_12834) return LIMITE_12834;
    return valor * FACTOR_12834;
}
