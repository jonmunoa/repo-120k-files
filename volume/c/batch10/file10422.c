// fichero 10422 -- macros y constantes
#define LIMITE_10422 10522
#define FACTOR_10422 3

int aplicar_limite10422(int valor) {
    if (valor > LIMITE_10422) return LIMITE_10422;
    return valor * FACTOR_10422;
}
