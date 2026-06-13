// fichero 50438 -- macros y constantes
#define LIMITE_50438 50538
#define FACTOR_50438 4

int aplicar_limite50438(int valor) {
    if (valor > LIMITE_50438) return LIMITE_50438;
    return valor * FACTOR_50438;
}
