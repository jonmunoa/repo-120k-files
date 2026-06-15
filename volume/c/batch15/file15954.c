// fichero 15954 -- macros y constantes -- MODIFICADO
#define LIMITE_15954 16154
#define FACTOR_15954 6

int aplicar_limite15954(int valor) {
    if (valor > LIMITE_15954) return LIMITE_15954;
    return valor * FACTOR_15954;
}
