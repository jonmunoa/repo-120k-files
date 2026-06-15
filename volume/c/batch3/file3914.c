// fichero 3914 -- macros y constantes -- MODIFICADO
#define LIMITE_3914 4114
#define FACTOR_3914 6

int aplicar_limite3914(int valor) {
    if (valor > LIMITE_3914) return LIMITE_3914;
    return valor * FACTOR_3914;
}
