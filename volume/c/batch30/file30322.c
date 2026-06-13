// fichero 30322 -- macros y constantes
#define LIMITE_30322 30422
#define FACTOR_30322 3

int aplicar_limite30322(int valor) {
    if (valor > LIMITE_30322) return LIMITE_30322;
    return valor * FACTOR_30322;
}
