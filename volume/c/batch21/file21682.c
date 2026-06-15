// fichero 21682 -- macros y constantes -- MODIFICADO
#define LIMITE_21682 21882
#define FACTOR_21682 4

int aplicar_limite21682(int valor) {
    if (valor > LIMITE_21682) return LIMITE_21682;
    return valor * FACTOR_21682;
}
