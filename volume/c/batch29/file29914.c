// fichero 29914 -- macros y constantes -- MODIFICADO
#define LIMITE_29914 30114
#define FACTOR_29914 6

int aplicar_limite29914(int valor) {
    if (valor > LIMITE_29914) return LIMITE_29914;
    return valor * FACTOR_29914;
}
