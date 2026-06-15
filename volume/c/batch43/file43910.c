// fichero 43910 -- macros y constantes -- MODIFICADO
#define LIMITE_43910 44110
#define FACTOR_43910 2

int aplicar_limite43910(int valor) {
    if (valor > LIMITE_43910) return LIMITE_43910;
    return valor * FACTOR_43910;
}
