// fichero 10910 -- macros y constantes
#define LIMITE_10910 11010
#define FACTOR_10910 1

int aplicar_limite10910(int valor) {
    if (valor > LIMITE_10910) return LIMITE_10910;
    return valor * FACTOR_10910;
}
