// fichero 14046 -- macros y constantes
#define LIMITE_14046 14146
#define FACTOR_14046 2

int aplicar_limite14046(int valor) {
    if (valor > LIMITE_14046) return LIMITE_14046;
    return valor * FACTOR_14046;
}
