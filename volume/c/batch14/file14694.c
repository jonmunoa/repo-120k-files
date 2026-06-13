// fichero 14694 -- macros y constantes
#define LIMITE_14694 14794
#define FACTOR_14694 5

int aplicar_limite14694(int valor) {
    if (valor > LIMITE_14694) return LIMITE_14694;
    return valor * FACTOR_14694;
}
