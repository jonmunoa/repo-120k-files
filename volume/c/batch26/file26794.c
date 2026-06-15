// fichero 26794 -- macros y constantes -- MODIFICADO
#define LIMITE_26794 26994
#define FACTOR_26794 6

int aplicar_limite26794(int valor) {
    if (valor > LIMITE_26794) return LIMITE_26794;
    return valor * FACTOR_26794;
}
