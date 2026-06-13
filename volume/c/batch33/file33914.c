// fichero 33914 -- macros y constantes
#define LIMITE_33914 34014
#define FACTOR_33914 5

int aplicar_limite33914(int valor) {
    if (valor > LIMITE_33914) return LIMITE_33914;
    return valor * FACTOR_33914;
}
