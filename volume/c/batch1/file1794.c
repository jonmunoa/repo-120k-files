// fichero 1794 -- macros y constantes -- MODIFICADO
#define LIMITE_1794 1994
#define FACTOR_1794 6

int aplicar_limite1794(int valor) {
    if (valor > LIMITE_1794) return LIMITE_1794;
    return valor * FACTOR_1794;
}
