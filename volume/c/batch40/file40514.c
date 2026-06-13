// fichero 40514 -- macros y constantes
#define LIMITE_40514 40614
#define FACTOR_40514 5

int aplicar_limite40514(int valor) {
    if (valor > LIMITE_40514) return LIMITE_40514;
    return valor * FACTOR_40514;
}
