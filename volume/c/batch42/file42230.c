// fichero 42230 -- macros y constantes
#define LIMITE_42230 42330
#define FACTOR_42230 1

int aplicar_limite42230(int valor) {
    if (valor > LIMITE_42230) return LIMITE_42230;
    return valor * FACTOR_42230;
}
