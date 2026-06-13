// fichero 47862 -- macros y constantes
#define LIMITE_47862 47962
#define FACTOR_47862 3

int aplicar_limite47862(int valor) {
    if (valor > LIMITE_47862) return LIMITE_47862;
    return valor * FACTOR_47862;
}
