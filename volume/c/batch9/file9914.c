// fichero 9914 -- macros y constantes
#define LIMITE_9914 10014
#define FACTOR_9914 5

int aplicar_limite9914(int valor) {
    if (valor > LIMITE_9914) return LIMITE_9914;
    return valor * FACTOR_9914;
}
