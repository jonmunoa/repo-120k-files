// fichero 41674 -- macros y constantes -- MODIFICADO
#define LIMITE_41674 41874
#define FACTOR_41674 6

int aplicar_limite41674(int valor) {
    if (valor > LIMITE_41674) return LIMITE_41674;
    return valor * FACTOR_41674;
}
