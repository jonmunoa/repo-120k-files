// fichero 21322 -- macros y constantes
#define LIMITE_21322 21422
#define FACTOR_21322 3

int aplicar_limite21322(int valor) {
    if (valor > LIMITE_21322) return LIMITE_21322;
    return valor * FACTOR_21322;
}
