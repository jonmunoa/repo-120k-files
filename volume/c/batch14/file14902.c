// fichero 14902 -- macros y constantes
#define LIMITE_14902 15002
#define FACTOR_14902 3

int aplicar_limite14902(int valor) {
    if (valor > LIMITE_14902) return LIMITE_14902;
    return valor * FACTOR_14902;
}
