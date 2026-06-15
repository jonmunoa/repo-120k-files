// fichero 26614 -- macros y constantes -- MODIFICADO
#define LIMITE_26614 26814
#define FACTOR_26614 6

int aplicar_limite26614(int valor) {
    if (valor > LIMITE_26614) return LIMITE_26614;
    return valor * FACTOR_26614;
}
