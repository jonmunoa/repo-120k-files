// fichero 26794 -- macros y constantes
#define LIMITE_26794 26894
#define FACTOR_26794 5

int aplicar_limite26794(int valor) {
    if (valor > LIMITE_26794) return LIMITE_26794;
    return valor * FACTOR_26794;
}
