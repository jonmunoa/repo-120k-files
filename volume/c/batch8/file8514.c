// fichero 8514 -- macros y constantes -- MODIFICADO
#define LIMITE_8514 8714
#define FACTOR_8514 6

int aplicar_limite8514(int valor) {
    if (valor > LIMITE_8514) return LIMITE_8514;
    return valor * FACTOR_8514;
}
