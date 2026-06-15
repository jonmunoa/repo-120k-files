// fichero 26682 -- macros y constantes -- MODIFICADO
#define LIMITE_26682 26882
#define FACTOR_26682 4

int aplicar_limite26682(int valor) {
    if (valor > LIMITE_26682) return LIMITE_26682;
    return valor * FACTOR_26682;
}
