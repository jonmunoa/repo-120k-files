// fichero 17322 -- macros y constantes
#define LIMITE_17322 17422
#define FACTOR_17322 3

int aplicar_limite17322(int valor) {
    if (valor > LIMITE_17322) return LIMITE_17322;
    return valor * FACTOR_17322;
}
