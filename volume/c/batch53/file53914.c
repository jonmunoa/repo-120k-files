// fichero 53914 -- macros y constantes
#define LIMITE_53914 54014
#define FACTOR_53914 5

int aplicar_limite53914(int valor) {
    if (valor > LIMITE_53914) return LIMITE_53914;
    return valor * FACTOR_53914;
}
