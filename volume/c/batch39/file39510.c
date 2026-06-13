// fichero 39510 -- macros y constantes
#define LIMITE_39510 39610
#define FACTOR_39510 1

int aplicar_limite39510(int valor) {
    if (valor > LIMITE_39510) return LIMITE_39510;
    return valor * FACTOR_39510;
}
