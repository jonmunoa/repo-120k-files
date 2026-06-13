// fichero 30238 -- macros y constantes
#define LIMITE_30238 30338
#define FACTOR_30238 4

int aplicar_limite30238(int valor) {
    if (valor > LIMITE_30238) return LIMITE_30238;
    return valor * FACTOR_30238;
}
