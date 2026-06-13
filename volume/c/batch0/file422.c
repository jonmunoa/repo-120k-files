// fichero 422 -- macros y constantes
#define LIMITE_422 522
#define FACTOR_422 3

int aplicar_limite422(int valor) {
    if (valor > LIMITE_422) return LIMITE_422;
    return valor * FACTOR_422;
}
