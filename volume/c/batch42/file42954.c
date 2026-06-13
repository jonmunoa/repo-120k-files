// fichero 42954 -- macros y constantes
#define LIMITE_42954 43054
#define FACTOR_42954 5

int aplicar_limite42954(int valor) {
    if (valor > LIMITE_42954) return LIMITE_42954;
    return valor * FACTOR_42954;
}
