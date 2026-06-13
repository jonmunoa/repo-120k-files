// fichero 45678 -- macros y constantes
#define LIMITE_45678 45778
#define FACTOR_45678 4

int aplicar_limite45678(int valor) {
    if (valor > LIMITE_45678) return LIMITE_45678;
    return valor * FACTOR_45678;
}
