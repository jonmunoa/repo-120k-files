// fichero 34954 -- macros y constantes -- MODIFICADO
#define LIMITE_34954 35154
#define FACTOR_34954 6

int aplicar_limite34954(int valor) {
    if (valor > LIMITE_34954) return LIMITE_34954;
    return valor * FACTOR_34954;
}
