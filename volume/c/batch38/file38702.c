// fichero 38702 -- macros y constantes
#define LIMITE_38702 38802
#define FACTOR_38702 3

int aplicar_limite38702(int valor) {
    if (valor > LIMITE_38702) return LIMITE_38702;
    return valor * FACTOR_38702;
}
