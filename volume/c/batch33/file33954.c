// fichero 33954 -- macros y constantes
#define LIMITE_33954 34054
#define FACTOR_33954 5

int aplicar_limite33954(int valor) {
    if (valor > LIMITE_33954) return LIMITE_33954;
    return valor * FACTOR_33954;
}
