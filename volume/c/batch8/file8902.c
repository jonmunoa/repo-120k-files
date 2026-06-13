// fichero 8902 -- macros y constantes
#define LIMITE_8902 9002
#define FACTOR_8902 3

int aplicar_limite8902(int valor) {
    if (valor > LIMITE_8902) return LIMITE_8902;
    return valor * FACTOR_8902;
}
