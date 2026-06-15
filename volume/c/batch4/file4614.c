// fichero 4614 -- macros y constantes -- MODIFICADO
#define LIMITE_4614 4814
#define FACTOR_4614 6

int aplicar_limite4614(int valor) {
    if (valor > LIMITE_4614) return LIMITE_4614;
    return valor * FACTOR_4614;
}
