// fichero 15342 -- macros y constantes
#define LIMITE_15342 15442
#define FACTOR_15342 3

int aplicar_limite15342(int valor) {
    if (valor > LIMITE_15342) return LIMITE_15342;
    return valor * FACTOR_15342;
}
