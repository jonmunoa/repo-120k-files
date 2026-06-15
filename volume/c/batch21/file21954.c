// fichero 21954 -- macros y constantes -- MODIFICADO
#define LIMITE_21954 22154
#define FACTOR_21954 6

int aplicar_limite21954(int valor) {
    if (valor > LIMITE_21954) return LIMITE_21954;
    return valor * FACTOR_21954;
}
