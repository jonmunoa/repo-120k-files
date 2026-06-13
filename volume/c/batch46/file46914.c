// fichero 46914 -- macros y constantes
#define LIMITE_46914 47014
#define FACTOR_46914 5

int aplicar_limite46914(int valor) {
    if (valor > LIMITE_46914) return LIMITE_46914;
    return valor * FACTOR_46914;
}
