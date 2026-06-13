// fichero 43910 -- macros y constantes
#define LIMITE_43910 44010
#define FACTOR_43910 1

int aplicar_limite43910(int valor) {
    if (valor > LIMITE_43910) return LIMITE_43910;
    return valor * FACTOR_43910;
}
