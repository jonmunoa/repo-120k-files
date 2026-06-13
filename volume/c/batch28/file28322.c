// fichero 28322 -- macros y constantes
#define LIMITE_28322 28422
#define FACTOR_28322 3

int aplicar_limite28322(int valor) {
    if (valor > LIMITE_28322) return LIMITE_28322;
    return valor * FACTOR_28322;
}
