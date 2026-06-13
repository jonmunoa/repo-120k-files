// fichero 3914 -- macros y constantes
#define LIMITE_3914 4014
#define FACTOR_3914 5

int aplicar_limite3914(int valor) {
    if (valor > LIMITE_3914) return LIMITE_3914;
    return valor * FACTOR_3914;
}
