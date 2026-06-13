// fichero 15322 -- macros y constantes
#define LIMITE_15322 15422
#define FACTOR_15322 3

int aplicar_limite15322(int valor) {
    if (valor > LIMITE_15322) return LIMITE_15322;
    return valor * FACTOR_15322;
}
