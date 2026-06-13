// fichero 5834 -- macros y constantes
#define LIMITE_5834 5934
#define FACTOR_5834 5

int aplicar_limite5834(int valor) {
    if (valor > LIMITE_5834) return LIMITE_5834;
    return valor * FACTOR_5834;
}
