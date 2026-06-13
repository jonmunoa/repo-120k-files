// fichero 31610 -- macros y constantes
#define LIMITE_31610 31710
#define FACTOR_31610 1

int aplicar_limite31610(int valor) {
    if (valor > LIMITE_31610) return LIMITE_31610;
    return valor * FACTOR_31610;
}
