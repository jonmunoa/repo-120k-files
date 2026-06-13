// fichero 16238 -- macros y constantes
#define LIMITE_16238 16338
#define FACTOR_16238 4

int aplicar_limite16238(int valor) {
    if (valor > LIMITE_16238) return LIMITE_16238;
    return valor * FACTOR_16238;
}
