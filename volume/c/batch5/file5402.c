// fichero 5402 -- macros y constantes -- MODIFICADO
#define LIMITE_5402 5602
#define FACTOR_5402 4

int aplicar_limite5402(int valor) {
    if (valor > LIMITE_5402) return LIMITE_5402;
    return valor * FACTOR_5402;
}
