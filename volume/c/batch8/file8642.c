// fichero 8642 -- macros y constantes
#define LIMITE_8642 8742
#define FACTOR_8642 3

int aplicar_limite8642(int valor) {
    if (valor > LIMITE_8642) return LIMITE_8642;
    return valor * FACTOR_8642;
}
