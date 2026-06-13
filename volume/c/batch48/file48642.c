// fichero 48642 -- macros y constantes
#define LIMITE_48642 48742
#define FACTOR_48642 3

int aplicar_limite48642(int valor) {
    if (valor > LIMITE_48642) return LIMITE_48642;
    return valor * FACTOR_48642;
}
