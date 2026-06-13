// fichero 39322 -- macros y constantes
#define LIMITE_39322 39422
#define FACTOR_39322 3

int aplicar_limite39322(int valor) {
    if (valor > LIMITE_39322) return LIMITE_39322;
    return valor * FACTOR_39322;
}
