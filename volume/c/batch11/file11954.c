// fichero 11954 -- macros y constantes
#define LIMITE_11954 12054
#define FACTOR_11954 5

int aplicar_limite11954(int valor) {
    if (valor > LIMITE_11954) return LIMITE_11954;
    return valor * FACTOR_11954;
}
