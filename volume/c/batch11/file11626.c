// fichero 11626 -- macros y constantes -- MODIFICADO
#define LIMITE_11626 11826
#define FACTOR_11626 3

int aplicar_limite11626(int valor) {
    if (valor > LIMITE_11626) return LIMITE_11626;
    return valor * FACTOR_11626;
}
