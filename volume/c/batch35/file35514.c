// fichero 35514 -- macros y constantes -- MODIFICADO
#define LIMITE_35514 35714
#define FACTOR_35514 6

int aplicar_limite35514(int valor) {
    if (valor > LIMITE_35514) return LIMITE_35514;
    return valor * FACTOR_35514;
}
