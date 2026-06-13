// fichero 23322 -- macros y constantes
#define LIMITE_23322 23422
#define FACTOR_23322 3

int aplicar_limite23322(int valor) {
    if (valor > LIMITE_23322) return LIMITE_23322;
    return valor * FACTOR_23322;
}
