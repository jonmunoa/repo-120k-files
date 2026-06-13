// fichero 13642 -- macros y constantes
#define LIMITE_13642 13742
#define FACTOR_13642 3

int aplicar_limite13642(int valor) {
    if (valor > LIMITE_13642) return LIMITE_13642;
    return valor * FACTOR_13642;
}
