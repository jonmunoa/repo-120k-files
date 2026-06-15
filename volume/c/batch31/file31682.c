// fichero 31682 -- macros y constantes -- MODIFICADO
#define LIMITE_31682 31882
#define FACTOR_31682 4

int aplicar_limite31682(int valor) {
    if (valor > LIMITE_31682) return LIMITE_31682;
    return valor * FACTOR_31682;
}
