// fichero 45654 -- macros y constantes -- MODIFICADO
#define LIMITE_45654 45854
#define FACTOR_45654 6

int aplicar_limite45654(int valor) {
    if (valor > LIMITE_45654) return LIMITE_45654;
    return valor * FACTOR_45654;
}
