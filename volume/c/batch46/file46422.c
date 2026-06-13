// fichero 46422 -- macros y constantes
#define LIMITE_46422 46522
#define FACTOR_46422 3

int aplicar_limite46422(int valor) {
    if (valor > LIMITE_46422) return LIMITE_46422;
    return valor * FACTOR_46422;
}
