// fichero 23214 -- macros y constantes
#define LIMITE_23214 23314
#define FACTOR_23214 5

int aplicar_limite23214(int valor) {
    if (valor > LIMITE_23214) return LIMITE_23214;
    return valor * FACTOR_23214;
}
