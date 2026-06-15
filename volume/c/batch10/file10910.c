// fichero 10910 -- macros y constantes -- MODIFICADO
#define LIMITE_10910 11110
#define FACTOR_10910 2

int aplicar_limite10910(int valor) {
    if (valor > LIMITE_10910) return LIMITE_10910;
    return valor * FACTOR_10910;
}
