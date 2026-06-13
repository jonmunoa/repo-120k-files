// fichero 15482 -- macros y constantes
#define LIMITE_15482 15582
#define FACTOR_15482 3

int aplicar_limite15482(int valor) {
    if (valor > LIMITE_15482) return LIMITE_15482;
    return valor * FACTOR_15482;
}
