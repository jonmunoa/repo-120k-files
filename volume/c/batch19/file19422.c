// fichero 19422 -- macros y constantes
#define LIMITE_19422 19522
#define FACTOR_19422 3

int aplicar_limite19422(int valor) {
    if (valor > LIMITE_19422) return LIMITE_19422;
    return valor * FACTOR_19422;
}
