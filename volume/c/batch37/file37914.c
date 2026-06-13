// fichero 37914 -- macros y constantes
#define LIMITE_37914 38014
#define FACTOR_37914 5

int aplicar_limite37914(int valor) {
    if (valor > LIMITE_37914) return LIMITE_37914;
    return valor * FACTOR_37914;
}
