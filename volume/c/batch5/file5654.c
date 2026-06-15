// fichero 5654 -- macros y constantes -- MODIFICADO
#define LIMITE_5654 5854
#define FACTOR_5654 6

int aplicar_limite5654(int valor) {
    if (valor > LIMITE_5654) return LIMITE_5654;
    return valor * FACTOR_5654;
}
