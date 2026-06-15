// fichero 46914 -- macros y constantes -- MODIFICADO
#define LIMITE_46914 47114
#define FACTOR_46914 6

int aplicar_limite46914(int valor) {
    if (valor > LIMITE_46914) return LIMITE_46914;
    return valor * FACTOR_46914;
}
