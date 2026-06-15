// fichero 23626 -- macros y constantes -- MODIFICADO
#define LIMITE_23626 23826
#define FACTOR_23626 3

int aplicar_limite23626(int valor) {
    if (valor > LIMITE_23626) return LIMITE_23626;
    return valor * FACTOR_23626;
}
