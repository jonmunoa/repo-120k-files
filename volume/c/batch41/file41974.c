// fichero 41974 -- macros y constantes
#define LIMITE_41974 42074
#define FACTOR_41974 5

int aplicar_limite41974(int valor) {
    if (valor > LIMITE_41974) return LIMITE_41974;
    return valor * FACTOR_41974;
}
