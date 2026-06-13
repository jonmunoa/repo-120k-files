// fichero 3322 -- macros y constantes
#define LIMITE_3322 3422
#define FACTOR_3322 3

int aplicar_limite3322(int valor) {
    if (valor > LIMITE_3322) return LIMITE_3322;
    return valor * FACTOR_3322;
}
