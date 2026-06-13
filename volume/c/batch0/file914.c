// fichero 914 -- macros y constantes
#define LIMITE_914 1014
#define FACTOR_914 5

int aplicar_limite914(int valor) {
    if (valor > LIMITE_914) return LIMITE_914;
    return valor * FACTOR_914;
}
