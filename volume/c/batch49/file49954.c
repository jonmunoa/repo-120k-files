// fichero 49954 -- macros y constantes -- MODIFICADO
#define LIMITE_49954 50154
#define FACTOR_49954 6

int aplicar_limite49954(int valor) {
    if (valor > LIMITE_49954) return LIMITE_49954;
    return valor * FACTOR_49954;
}
