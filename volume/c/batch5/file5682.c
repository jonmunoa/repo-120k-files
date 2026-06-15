// fichero 5682 -- macros y constantes -- MODIFICADO
#define LIMITE_5682 5882
#define FACTOR_5682 4

int aplicar_limite5682(int valor) {
    if (valor > LIMITE_5682) return LIMITE_5682;
    return valor * FACTOR_5682;
}
