// fichero 24682 -- macros y constantes -- MODIFICADO
#define LIMITE_24682 24882
#define FACTOR_24682 4

int aplicar_limite24682(int valor) {
    if (valor > LIMITE_24682) return LIMITE_24682;
    return valor * FACTOR_24682;
}
