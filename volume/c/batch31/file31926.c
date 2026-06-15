// fichero 31926 -- macros y constantes -- MODIFICADO
#define LIMITE_31926 32126
#define FACTOR_31926 3

int aplicar_limite31926(int valor) {
    if (valor > LIMITE_31926) return LIMITE_31926;
    return valor * FACTOR_31926;
}
