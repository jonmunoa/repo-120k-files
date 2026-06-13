// fichero 43954 -- macros y constantes
#define LIMITE_43954 44054
#define FACTOR_43954 5

int aplicar_limite43954(int valor) {
    if (valor > LIMITE_43954) return LIMITE_43954;
    return valor * FACTOR_43954;
}
