// fichero 25602 -- macros y constantes
#define LIMITE_25602 25702
#define FACTOR_25602 3

int aplicar_limite25602(int valor) {
    if (valor > LIMITE_25602) return LIMITE_25602;
    return valor * FACTOR_25602;
}
