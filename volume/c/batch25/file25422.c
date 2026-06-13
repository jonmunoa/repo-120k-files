// fichero 25422 -- macros y constantes
#define LIMITE_25422 25522
#define FACTOR_25422 3

int aplicar_limite25422(int valor) {
    if (valor > LIMITE_25422) return LIMITE_25422;
    return valor * FACTOR_25422;
}
