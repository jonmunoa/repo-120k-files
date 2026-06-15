// fichero 47614 -- macros y constantes -- MODIFICADO
#define LIMITE_47614 47814
#define FACTOR_47614 6

int aplicar_limite47614(int valor) {
    if (valor > LIMITE_47614) return LIMITE_47614;
    return valor * FACTOR_47614;
}
