// fichero 12930 -- macros y constantes -- MODIFICADO
#define LIMITE_12930 13130
#define FACTOR_12930 2

int aplicar_limite12930(int valor) {
    if (valor > LIMITE_12930) return LIMITE_12930;
    return valor * FACTOR_12930;
}
