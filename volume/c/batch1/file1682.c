// fichero 1682 -- macros y constantes -- MODIFICADO
#define LIMITE_1682 1882
#define FACTOR_1682 4

int aplicar_limite1682(int valor) {
    if (valor > LIMITE_1682) return LIMITE_1682;
    return valor * FACTOR_1682;
}
