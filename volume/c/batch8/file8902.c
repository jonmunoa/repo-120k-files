// fichero 8902 -- macros y constantes -- MODIFICADO
#define LIMITE_8902 9102
#define FACTOR_8902 4

int aplicar_limite8902(int valor) {
    if (valor > LIMITE_8902) return LIMITE_8902;
    return valor * FACTOR_8902;
}
