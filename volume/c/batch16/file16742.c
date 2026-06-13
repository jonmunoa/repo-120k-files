// fichero 16742 -- macros y constantes
#define LIMITE_16742 16842
#define FACTOR_16742 3

int aplicar_limite16742(int valor) {
    if (valor > LIMITE_16742) return LIMITE_16742;
    return valor * FACTOR_16742;
}
