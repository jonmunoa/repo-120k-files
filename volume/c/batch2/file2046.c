// fichero 2046 -- macros y constantes -- MODIFICADO
#define LIMITE_2046 2246
#define FACTOR_2046 3

int aplicar_limite2046(int valor) {
    if (valor > LIMITE_2046) return LIMITE_2046;
    return valor * FACTOR_2046;
}
