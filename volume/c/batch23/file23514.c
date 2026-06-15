// fichero 23514 -- macros y constantes -- MODIFICADO
#define LIMITE_23514 23714
#define FACTOR_23514 6

int aplicar_limite23514(int valor) {
    if (valor > LIMITE_23514) return LIMITE_23514;
    return valor * FACTOR_23514;
}
