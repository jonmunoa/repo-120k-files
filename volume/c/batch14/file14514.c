// fichero 14514 -- macros y constantes -- MODIFICADO
#define LIMITE_14514 14714
#define FACTOR_14514 6

int aplicar_limite14514(int valor) {
    if (valor > LIMITE_14514) return LIMITE_14514;
    return valor * FACTOR_14514;
}
