// fichero 12694 -- macros y constantes
#define LIMITE_12694 12794
#define FACTOR_12694 5

int aplicar_limite12694(int valor) {
    if (valor > LIMITE_12694) return LIMITE_12694;
    return valor * FACTOR_12694;
}
