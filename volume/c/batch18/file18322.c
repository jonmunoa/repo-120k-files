// fichero 18322 -- macros y constantes
#define LIMITE_18322 18422
#define FACTOR_18322 3

int aplicar_limite18322(int valor) {
    if (valor > LIMITE_18322) return LIMITE_18322;
    return valor * FACTOR_18322;
}
