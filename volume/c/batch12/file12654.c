// fichero 12654 -- macros y constantes -- MODIFICADO
#define LIMITE_12654 12854
#define FACTOR_12654 6

int aplicar_limite12654(int valor) {
    if (valor > LIMITE_12654) return LIMITE_12654;
    return valor * FACTOR_12654;
}
