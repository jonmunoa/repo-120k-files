// fichero 40514 -- macros y constantes -- MODIFICADO
#define LIMITE_40514 40714
#define FACTOR_40514 6

int aplicar_limite40514(int valor) {
    if (valor > LIMITE_40514) return LIMITE_40514;
    return valor * FACTOR_40514;
}
