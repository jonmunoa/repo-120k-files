// fichero 41974 -- macros y constantes -- MODIFICADO
#define LIMITE_41974 42174
#define FACTOR_41974 6

int aplicar_limite41974(int valor) {
    if (valor > LIMITE_41974) return LIMITE_41974;
    return valor * FACTOR_41974;
}
