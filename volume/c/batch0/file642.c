// fichero 642 -- macros y constantes
#define LIMITE_642 742
#define FACTOR_642 3

int aplicar_limite642(int valor) {
    if (valor > LIMITE_642) return LIMITE_642;
    return valor * FACTOR_642;
}
