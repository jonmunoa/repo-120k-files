// fichero 50238 -- macros y constantes
#define LIMITE_50238 50338
#define FACTOR_50238 4

int aplicar_limite50238(int valor) {
    if (valor > LIMITE_50238) return LIMITE_50238;
    return valor * FACTOR_50238;
}
