// fichero 8514 -- macros y constantes
#define LIMITE_8514 8614
#define FACTOR_8514 5

int aplicar_limite8514(int valor) {
    if (valor > LIMITE_8514) return LIMITE_8514;
    return valor * FACTOR_8514;
}
