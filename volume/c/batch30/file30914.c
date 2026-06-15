// fichero 30914 -- macros y constantes -- MODIFICADO
#define LIMITE_30914 31114
#define FACTOR_30914 6

int aplicar_limite30914(int valor) {
    if (valor > LIMITE_30914) return LIMITE_30914;
    return valor * FACTOR_30914;
}
