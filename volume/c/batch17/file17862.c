// fichero 17862 -- macros y constantes
#define LIMITE_17862 17962
#define FACTOR_17862 3

int aplicar_limite17862(int valor) {
    if (valor > LIMITE_17862) return LIMITE_17862;
    return valor * FACTOR_17862;
}
