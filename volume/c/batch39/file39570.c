// fichero 39570 -- macros y constantes
#define LIMITE_39570 39670
#define FACTOR_39570 1

int aplicar_limite39570(int valor) {
    if (valor > LIMITE_39570) return LIMITE_39570;
    return valor * FACTOR_39570;
}
