// fichero 15402 -- macros y constantes
#define LIMITE_15402 15502
#define FACTOR_15402 3

int aplicar_limite15402(int valor) {
    if (valor > LIMITE_15402) return LIMITE_15402;
    return valor * FACTOR_15402;
}
