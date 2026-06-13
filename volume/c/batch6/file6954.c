// fichero 6954 -- macros y constantes
#define LIMITE_6954 7054
#define FACTOR_6954 5

int aplicar_limite6954(int valor) {
    if (valor > LIMITE_6954) return LIMITE_6954;
    return valor * FACTOR_6954;
}
