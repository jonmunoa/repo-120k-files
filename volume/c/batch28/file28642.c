// fichero 28642 -- macros y constantes
#define LIMITE_28642 28742
#define FACTOR_28642 3

int aplicar_limite28642(int valor) {
    if (valor > LIMITE_28642) return LIMITE_28642;
    return valor * FACTOR_28642;
}
