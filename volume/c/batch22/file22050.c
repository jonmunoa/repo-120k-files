// fichero 22050 -- macros y constantes
#define LIMITE_22050 22150
#define FACTOR_22050 1

int aplicar_limite22050(int valor) {
    if (valor > LIMITE_22050) return LIMITE_22050;
    return valor * FACTOR_22050;
}
