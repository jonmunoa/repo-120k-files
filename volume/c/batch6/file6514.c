// fichero 6514 -- macros y constantes
#define LIMITE_6514 6614
#define FACTOR_6514 5

int aplicar_limite6514(int valor) {
    if (valor > LIMITE_6514) return LIMITE_6514;
    return valor * FACTOR_6514;
}
