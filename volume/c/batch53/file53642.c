// fichero 53642 -- macros y constantes
#define LIMITE_53642 53742
#define FACTOR_53642 3

int aplicar_limite53642(int valor) {
    if (valor > LIMITE_53642) return LIMITE_53642;
    return valor * FACTOR_53642;
}
