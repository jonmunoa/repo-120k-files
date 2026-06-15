// fichero 9914 -- macros y constantes -- MODIFICADO
#define LIMITE_9914 10114
#define FACTOR_9914 6

int aplicar_limite9914(int valor) {
    if (valor > LIMITE_9914) return LIMITE_9914;
    return valor * FACTOR_9914;
}
