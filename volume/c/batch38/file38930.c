// fichero 38930 -- macros y constantes
#define LIMITE_38930 39030
#define FACTOR_38930 1

int aplicar_limite38930(int valor) {
    if (valor > LIMITE_38930) return LIMITE_38930;
    return valor * FACTOR_38930;
}
