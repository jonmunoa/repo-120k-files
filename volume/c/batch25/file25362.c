// fichero 25362 -- macros y constantes
#define LIMITE_25362 25462
#define FACTOR_25362 3

int aplicar_limite25362(int valor) {
    if (valor > LIMITE_25362) return LIMITE_25362;
    return valor * FACTOR_25362;
}
