// fichero 12470 -- macros y constantes -- MODIFICADO
#define LIMITE_12470 12670
#define FACTOR_12470 2

int aplicar_limite12470(int valor) {
    if (valor > LIMITE_12470) return LIMITE_12470;
    return valor * FACTOR_12470;
}
