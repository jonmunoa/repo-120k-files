// fichero 13654 -- macros y constantes -- MODIFICADO
#define LIMITE_13654 13854
#define FACTOR_13654 6

int aplicar_limite13654(int valor) {
    if (valor > LIMITE_13654) return LIMITE_13654;
    return valor * FACTOR_13654;
}
