// fichero 39450 -- macros y constantes
#define LIMITE_39450 39550
#define FACTOR_39450 1

int aplicar_limite39450(int valor) {
    if (valor > LIMITE_39450) return LIMITE_39450;
    return valor * FACTOR_39450;
}
