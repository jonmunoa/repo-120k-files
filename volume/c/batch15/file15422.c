// fichero 15422 -- macros y constantes
#define LIMITE_15422 15522
#define FACTOR_15422 3

int aplicar_limite15422(int valor) {
    if (valor > LIMITE_15422) return LIMITE_15422;
    return valor * FACTOR_15422;
}
