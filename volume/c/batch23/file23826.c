// fichero 23826 -- macros y constantes -- MODIFICADO
#define LIMITE_23826 24026
#define FACTOR_23826 3

int aplicar_limite23826(int valor) {
    if (valor > LIMITE_23826) return LIMITE_23826;
    return valor * FACTOR_23826;
}
