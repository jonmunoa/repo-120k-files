// fichero 30414 -- macros y constantes -- MODIFICADO
#define LIMITE_30414 30614
#define FACTOR_30414 6

int aplicar_limite30414(int valor) {
    if (valor > LIMITE_30414) return LIMITE_30414;
    return valor * FACTOR_30414;
}
