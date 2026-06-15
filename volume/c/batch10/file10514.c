// fichero 10514 -- macros y constantes -- MODIFICADO
#define LIMITE_10514 10714
#define FACTOR_10514 6

int aplicar_limite10514(int valor) {
    if (valor > LIMITE_10514) return LIMITE_10514;
    return valor * FACTOR_10514;
}
