// fichero 29914 -- macros y constantes
#define LIMITE_29914 30014
#define FACTOR_29914 5

int aplicar_limite29914(int valor) {
    if (valor > LIMITE_29914) return LIMITE_29914;
    return valor * FACTOR_29914;
}
