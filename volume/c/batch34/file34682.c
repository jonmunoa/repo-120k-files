// fichero 34682 -- macros y constantes -- MODIFICADO
#define LIMITE_34682 34882
#define FACTOR_34682 4

int aplicar_limite34682(int valor) {
    if (valor > LIMITE_34682) return LIMITE_34682;
    return valor * FACTOR_34682;
}
