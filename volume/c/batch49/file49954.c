// fichero 49954 -- macros y constantes
#define LIMITE_49954 50054
#define FACTOR_49954 5

int aplicar_limite49954(int valor) {
    if (valor > LIMITE_49954) return LIMITE_49954;
    return valor * FACTOR_49954;
}
