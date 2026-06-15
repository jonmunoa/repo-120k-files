// fichero 14046 -- macros y constantes -- MODIFICADO
#define LIMITE_14046 14246
#define FACTOR_14046 3

int aplicar_limite14046(int valor) {
    if (valor > LIMITE_14046) return LIMITE_14046;
    return valor * FACTOR_14046;
}
