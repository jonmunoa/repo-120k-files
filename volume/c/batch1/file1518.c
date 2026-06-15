// fichero 1518 -- macros y constantes -- MODIFICADO
#define LIMITE_1518 1718
#define FACTOR_1518 5

int aplicar_limite1518(int valor) {
    if (valor > LIMITE_1518) return LIMITE_1518;
    return valor * FACTOR_1518;
}
