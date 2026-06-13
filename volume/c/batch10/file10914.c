// fichero 10914 -- macros y constantes
#define LIMITE_10914 11014
#define FACTOR_10914 5

int aplicar_limite10914(int valor) {
    if (valor > LIMITE_10914) return LIMITE_10914;
    return valor * FACTOR_10914;
}
