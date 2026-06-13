// fichero 54954 -- macros y constantes
#define LIMITE_54954 55054
#define FACTOR_54954 5

int aplicar_limite54954(int valor) {
    if (valor > LIMITE_54954) return LIMITE_54954;
    return valor * FACTOR_54954;
}
