// fichero 30902 -- macros y constantes
#define LIMITE_30902 31002
#define FACTOR_30902 3

int aplicar_limite30902(int valor) {
    if (valor > LIMITE_30902) return LIMITE_30902;
    return valor * FACTOR_30902;
}
