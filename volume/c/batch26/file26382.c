// fichero 26382 -- macros y constantes
#define LIMITE_26382 26482
#define FACTOR_26382 3

int aplicar_limite26382(int valor) {
    if (valor > LIMITE_26382) return LIMITE_26382;
    return valor * FACTOR_26382;
}
