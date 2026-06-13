// fichero 39354 -- macros y constantes
#define LIMITE_39354 39454
#define FACTOR_39354 5

int aplicar_limite39354(int valor) {
    if (valor > LIMITE_39354) return LIMITE_39354;
    return valor * FACTOR_39354;
}
