// fichero 20642 -- macros y constantes
#define LIMITE_20642 20742
#define FACTOR_20642 3

int aplicar_limite20642(int valor) {
    if (valor > LIMITE_20642) return LIMITE_20642;
    return valor * FACTOR_20642;
}
