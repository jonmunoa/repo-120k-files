// fichero 48682 -- macros y constantes -- MODIFICADO
#define LIMITE_48682 48882
#define FACTOR_48682 4

int aplicar_limite48682(int valor) {
    if (valor > LIMITE_48682) return LIMITE_48682;
    return valor * FACTOR_48682;
}
