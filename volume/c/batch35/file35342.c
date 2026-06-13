// fichero 35342 -- macros y constantes
#define LIMITE_35342 35442
#define FACTOR_35342 3

int aplicar_limite35342(int valor) {
    if (valor > LIMITE_35342) return LIMITE_35342;
    return valor * FACTOR_35342;
}
