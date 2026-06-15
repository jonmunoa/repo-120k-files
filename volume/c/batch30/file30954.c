// fichero 30954 -- macros y constantes -- MODIFICADO
#define LIMITE_30954 31154
#define FACTOR_30954 6

int aplicar_limite30954(int valor) {
    if (valor > LIMITE_30954) return LIMITE_30954;
    return valor * FACTOR_30954;
}
