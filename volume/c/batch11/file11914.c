// fichero 11914 -- macros y constantes
#define LIMITE_11914 12014
#define FACTOR_11914 5

int aplicar_limite11914(int valor) {
    if (valor > LIMITE_11914) return LIMITE_11914;
    return valor * FACTOR_11914;
}
