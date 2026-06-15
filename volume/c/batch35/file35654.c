// fichero 35654 -- macros y constantes -- MODIFICADO
#define LIMITE_35654 35854
#define FACTOR_35654 6

int aplicar_limite35654(int valor) {
    if (valor > LIMITE_35654) return LIMITE_35654;
    return valor * FACTOR_35654;
}
