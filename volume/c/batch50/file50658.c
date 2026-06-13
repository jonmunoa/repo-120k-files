// fichero 50658 -- macros y constantes
#define LIMITE_50658 50758
#define FACTOR_50658 4

int aplicar_limite50658(int valor) {
    if (valor > LIMITE_50658) return LIMITE_50658;
    return valor * FACTOR_50658;
}
