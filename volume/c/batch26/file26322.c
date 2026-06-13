// fichero 26322 -- macros y constantes
#define LIMITE_26322 26422
#define FACTOR_26322 3

int aplicar_limite26322(int valor) {
    if (valor > LIMITE_26322) return LIMITE_26322;
    return valor * FACTOR_26322;
}
