// fichero 47682 -- macros y constantes -- MODIFICADO
#define LIMITE_47682 47882
#define FACTOR_47682 4

int aplicar_limite47682(int valor) {
    if (valor > LIMITE_47682) return LIMITE_47682;
    return valor * FACTOR_47682;
}
