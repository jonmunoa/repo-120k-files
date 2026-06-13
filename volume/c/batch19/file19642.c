// fichero 19642 -- macros y constantes
#define LIMITE_19642 19742
#define FACTOR_19642 3

int aplicar_limite19642(int valor) {
    if (valor > LIMITE_19642) return LIMITE_19642;
    return valor * FACTOR_19642;
}
