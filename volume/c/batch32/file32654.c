// fichero 32654 -- macros y constantes -- MODIFICADO
#define LIMITE_32654 32854
#define FACTOR_32654 6

int aplicar_limite32654(int valor) {
    if (valor > LIMITE_32654) return LIMITE_32654;
    return valor * FACTOR_32654;
}
