// fichero 48954 -- macros y constantes
#define LIMITE_48954 49054
#define FACTOR_48954 5

int aplicar_limite48954(int valor) {
    if (valor > LIMITE_48954) return LIMITE_48954;
    return valor * FACTOR_48954;
}
