// fichero 34682 -- macros y constantes
#define LIMITE_34682 34782
#define FACTOR_34682 3

int aplicar_limite34682(int valor) {
    if (valor > LIMITE_34682) return LIMITE_34682;
    return valor * FACTOR_34682;
}
