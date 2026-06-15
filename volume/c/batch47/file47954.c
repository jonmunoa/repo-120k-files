// fichero 47954 -- macros y constantes -- MODIFICADO
#define LIMITE_47954 48154
#define FACTOR_47954 6

int aplicar_limite47954(int valor) {
    if (valor > LIMITE_47954) return LIMITE_47954;
    return valor * FACTOR_47954;
}
