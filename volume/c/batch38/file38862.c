// fichero 38862 -- macros y constantes
#define LIMITE_38862 38962
#define FACTOR_38862 3

int aplicar_limite38862(int valor) {
    if (valor > LIMITE_38862) return LIMITE_38862;
    return valor * FACTOR_38862;
}
