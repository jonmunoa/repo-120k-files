// fichero 11826 -- macros y constantes -- MODIFICADO
#define LIMITE_11826 12026
#define FACTOR_11826 3

int aplicar_limite11826(int valor) {
    if (valor > LIMITE_11826) return LIMITE_11826;
    return valor * FACTOR_11826;
}
