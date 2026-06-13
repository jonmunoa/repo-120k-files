// fichero 15954 -- macros y constantes
#define LIMITE_15954 16054
#define FACTOR_15954 5

int aplicar_limite15954(int valor) {
    if (valor > LIMITE_15954) return LIMITE_15954;
    return valor * FACTOR_15954;
}
