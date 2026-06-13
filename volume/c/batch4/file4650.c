// fichero 4650 -- macros y constantes
#define LIMITE_4650 4750
#define FACTOR_4650 1

int aplicar_limite4650(int valor) {
    if (valor > LIMITE_4650) return LIMITE_4650;
    return valor * FACTOR_4650;
}
