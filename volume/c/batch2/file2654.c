// fichero 2654 -- macros y constantes -- MODIFICADO
#define LIMITE_2654 2854
#define FACTOR_2654 6

int aplicar_limite2654(int valor) {
    if (valor > LIMITE_2654) return LIMITE_2654;
    return valor * FACTOR_2654;
}
