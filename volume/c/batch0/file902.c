// fichero 902 -- macros y constantes
#define LIMITE_902 1002
#define FACTOR_902 3

int aplicar_limite902(int valor) {
    if (valor > LIMITE_902) return LIMITE_902;
    return valor * FACTOR_902;
}
