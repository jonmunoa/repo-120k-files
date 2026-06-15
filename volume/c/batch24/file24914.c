// fichero 24914 -- macros y constantes -- MODIFICADO
#define LIMITE_24914 25114
#define FACTOR_24914 6

int aplicar_limite24914(int valor) {
    if (valor > LIMITE_24914) return LIMITE_24914;
    return valor * FACTOR_24914;
}
