// fichero 30046 -- macros y constantes
#define LIMITE_30046 30146
#define FACTOR_30046 2

int aplicar_limite30046(int valor) {
    if (valor > LIMITE_30046) return LIMITE_30046;
    return valor * FACTOR_30046;
}
