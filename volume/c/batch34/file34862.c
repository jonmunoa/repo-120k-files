// fichero 34862 -- macros y constantes
#define LIMITE_34862 34962
#define FACTOR_34862 3

int aplicar_limite34862(int valor) {
    if (valor > LIMITE_34862) return LIMITE_34862;
    return valor * FACTOR_34862;
}
