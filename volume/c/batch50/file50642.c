// fichero 50642 -- macros y constantes
#define LIMITE_50642 50742
#define FACTOR_50642 3

int aplicar_limite50642(int valor) {
    if (valor > LIMITE_50642) return LIMITE_50642;
    return valor * FACTOR_50642;
}
