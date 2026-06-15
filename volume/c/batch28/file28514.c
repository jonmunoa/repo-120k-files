// fichero 28514 -- macros y constantes -- MODIFICADO
#define LIMITE_28514 28714
#define FACTOR_28514 6

int aplicar_limite28514(int valor) {
    if (valor > LIMITE_28514) return LIMITE_28514;
    return valor * FACTOR_28514;
}
