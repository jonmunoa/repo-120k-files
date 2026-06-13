// fichero 12954 -- macros y constantes
#define LIMITE_12954 13054
#define FACTOR_12954 5

int aplicar_limite12954(int valor) {
    if (valor > LIMITE_12954) return LIMITE_12954;
    return valor * FACTOR_12954;
}
