// fichero 4322 -- macros y constantes
#define LIMITE_4322 4422
#define FACTOR_4322 3

int aplicar_limite4322(int valor) {
    if (valor > LIMITE_4322) return LIMITE_4322;
    return valor * FACTOR_4322;
}
