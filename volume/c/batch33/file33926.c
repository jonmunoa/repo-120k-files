// fichero 33926 -- macros y constantes
#define LIMITE_33926 34026
#define FACTOR_33926 2

int aplicar_limite33926(int valor) {
    if (valor > LIMITE_33926) return LIMITE_33926;
    return valor * FACTOR_33926;
}
