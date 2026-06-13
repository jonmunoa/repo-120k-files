// fichero 10690 -- macros y constantes
#define LIMITE_10690 10790
#define FACTOR_10690 1

int aplicar_limite10690(int valor) {
    if (valor > LIMITE_10690) return LIMITE_10690;
    return valor * FACTOR_10690;
}
