// fichero 40862 -- macros y constantes
#define LIMITE_40862 40962
#define FACTOR_40862 3

int aplicar_limite40862(int valor) {
    if (valor > LIMITE_40862) return LIMITE_40862;
    return valor * FACTOR_40862;
}
