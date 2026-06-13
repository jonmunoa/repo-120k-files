// fichero 46930 -- macros y constantes
#define LIMITE_46930 47030
#define FACTOR_46930 1

int aplicar_limite46930(int valor) {
    if (valor > LIMITE_46930) return LIMITE_46930;
    return valor * FACTOR_46930;
}
