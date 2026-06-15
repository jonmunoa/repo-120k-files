// fichero 15402 -- macros y constantes -- MODIFICADO
#define LIMITE_15402 15602
#define FACTOR_15402 4

int aplicar_limite15402(int valor) {
    if (valor > LIMITE_15402) return LIMITE_15402;
    return valor * FACTOR_15402;
}
