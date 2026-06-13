// fichero 24914 -- macros y constantes
#define LIMITE_24914 25014
#define FACTOR_24914 5

int aplicar_limite24914(int valor) {
    if (valor > LIMITE_24914) return LIMITE_24914;
    return valor * FACTOR_24914;
}
