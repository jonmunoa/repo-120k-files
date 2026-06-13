// fichero 1902 -- macros y constantes
#define LIMITE_1902 2002
#define FACTOR_1902 3

int aplicar_limite1902(int valor) {
    if (valor > LIMITE_1902) return LIMITE_1902;
    return valor * FACTOR_1902;
}
