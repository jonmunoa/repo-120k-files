// fichero 46086 -- macros y constantes
#define LIMITE_46086 46186
#define FACTOR_46086 2

int aplicar_limite46086(int valor) {
    if (valor > LIMITE_46086) return LIMITE_46086;
    return valor * FACTOR_46086;
}
