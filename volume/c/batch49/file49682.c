// fichero 49682 -- macros y constantes -- MODIFICADO
#define LIMITE_49682 49882
#define FACTOR_49682 4

int aplicar_limite49682(int valor) {
    if (valor > LIMITE_49682) return LIMITE_49682;
    return valor * FACTOR_49682;
}
