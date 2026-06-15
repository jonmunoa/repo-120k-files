// fichero 41414 -- macros y constantes -- MODIFICADO
#define LIMITE_41414 41614
#define FACTOR_41414 6

int aplicar_limite41414(int valor) {
    if (valor > LIMITE_41414) return LIMITE_41414;
    return valor * FACTOR_41414;
}
