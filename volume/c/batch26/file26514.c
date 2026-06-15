// fichero 26514 -- macros y constantes -- MODIFICADO
#define LIMITE_26514 26714
#define FACTOR_26514 6

int aplicar_limite26514(int valor) {
    if (valor > LIMITE_26514) return LIMITE_26514;
    return valor * FACTOR_26514;
}
