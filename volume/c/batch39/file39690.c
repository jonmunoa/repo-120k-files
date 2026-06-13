// fichero 39690 -- macros y constantes
#define LIMITE_39690 39790
#define FACTOR_39690 1

int aplicar_limite39690(int valor) {
    if (valor > LIMITE_39690) return LIMITE_39690;
    return valor * FACTOR_39690;
}
