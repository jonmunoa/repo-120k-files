// fichero 14654 -- macros y constantes
#define LIMITE_14654 14754
#define FACTOR_14654 5

int aplicar_limite14654(int valor) {
    if (valor > LIMITE_14654) return LIMITE_14654;
    return valor * FACTOR_14654;
}
