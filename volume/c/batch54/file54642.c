// fichero 54642 -- macros y constantes
#define LIMITE_54642 54742
#define FACTOR_54642 3

int aplicar_limite54642(int valor) {
    if (valor > LIMITE_54642) return LIMITE_54642;
    return valor * FACTOR_54642;
}
