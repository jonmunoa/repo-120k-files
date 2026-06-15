// fichero 11818 -- macros y constantes -- MODIFICADO
#define LIMITE_11818 12018
#define FACTOR_11818 5

int aplicar_limite11818(int valor) {
    if (valor > LIMITE_11818) return LIMITE_11818;
    return valor * FACTOR_11818;
}
