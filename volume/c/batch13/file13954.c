// fichero 13954 -- macros y constantes -- MODIFICADO
#define LIMITE_13954 14154
#define FACTOR_13954 6

int aplicar_limite13954(int valor) {
    if (valor > LIMITE_13954) return LIMITE_13954;
    return valor * FACTOR_13954;
}
