// fichero 40642 -- macros y constantes
#define LIMITE_40642 40742
#define FACTOR_40642 3

int aplicar_limite40642(int valor) {
    if (valor > LIMITE_40642) return LIMITE_40642;
    return valor * FACTOR_40642;
}
