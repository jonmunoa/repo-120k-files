// fichero 15642 -- macros y constantes
#define LIMITE_15642 15742
#define FACTOR_15642 3

int aplicar_limite15642(int valor) {
    if (valor > LIMITE_15642) return LIMITE_15642;
    return valor * FACTOR_15642;
}
