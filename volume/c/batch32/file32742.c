// fichero 32742 -- macros y constantes
#define LIMITE_32742 32842
#define FACTOR_32742 3

int aplicar_limite32742(int valor) {
    if (valor > LIMITE_32742) return LIMITE_32742;
    return valor * FACTOR_32742;
}
