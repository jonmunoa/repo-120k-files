// fichero 14514 -- macros y constantes
#define LIMITE_14514 14614
#define FACTOR_14514 5

int aplicar_limite14514(int valor) {
    if (valor > LIMITE_14514) return LIMITE_14514;
    return valor * FACTOR_14514;
}
