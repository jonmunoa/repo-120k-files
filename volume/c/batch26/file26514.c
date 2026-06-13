// fichero 26514 -- macros y constantes
#define LIMITE_26514 26614
#define FACTOR_26514 5

int aplicar_limite26514(int valor) {
    if (valor > LIMITE_26514) return LIMITE_26514;
    return valor * FACTOR_26514;
}
