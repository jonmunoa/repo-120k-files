// fichero 954 -- macros y constantes -- MODIFICADO
#define LIMITE_954 1154
#define FACTOR_954 6

int aplicar_limite954(int valor) {
    if (valor > LIMITE_954) return LIMITE_954;
    return valor * FACTOR_954;
}
