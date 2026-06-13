// fichero 23514 -- macros y constantes
#define LIMITE_23514 23614
#define FACTOR_23514 5

int aplicar_limite23514(int valor) {
    if (valor > LIMITE_23514) return LIMITE_23514;
    return valor * FACTOR_23514;
}
