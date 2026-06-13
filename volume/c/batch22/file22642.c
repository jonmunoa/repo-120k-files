// fichero 22642 -- macros y constantes
#define LIMITE_22642 22742
#define FACTOR_22642 3

int aplicar_limite22642(int valor) {
    if (valor > LIMITE_22642) return LIMITE_22642;
    return valor * FACTOR_22642;
}
