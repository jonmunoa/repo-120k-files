// fichero 6422 -- macros y constantes
#define LIMITE_6422 6522
#define FACTOR_6422 3

int aplicar_limite6422(int valor) {
    if (valor > LIMITE_6422) return LIMITE_6422;
    return valor * FACTOR_6422;
}
