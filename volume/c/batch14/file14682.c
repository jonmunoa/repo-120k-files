// fichero 14682 -- macros y constantes -- MODIFICADO
#define LIMITE_14682 14882
#define FACTOR_14682 4

int aplicar_limite14682(int valor) {
    if (valor > LIMITE_14682) return LIMITE_14682;
    return valor * FACTOR_14682;
}
