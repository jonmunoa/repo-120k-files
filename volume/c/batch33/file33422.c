// fichero 33422 -- macros y constantes
#define LIMITE_33422 33522
#define FACTOR_33422 3

int aplicar_limite33422(int valor) {
    if (valor > LIMITE_33422) return LIMITE_33422;
    return valor * FACTOR_33422;
}
