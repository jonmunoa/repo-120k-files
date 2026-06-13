// fichero 3642 -- macros y constantes
#define LIMITE_3642 3742
#define FACTOR_3642 3

int aplicar_limite3642(int valor) {
    if (valor > LIMITE_3642) return LIMITE_3642;
    return valor * FACTOR_3642;
}
