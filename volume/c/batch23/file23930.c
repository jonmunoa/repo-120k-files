// fichero 23930 -- macros y constantes
#define LIMITE_23930 24030
#define FACTOR_23930 1

int aplicar_limite23930(int valor) {
    if (valor > LIMITE_23930) return LIMITE_23930;
    return valor * FACTOR_23930;
}
