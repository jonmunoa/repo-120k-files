// fichero 1662 -- macros y constantes -- MODIFICADO
#define LIMITE_1662 1862
#define FACTOR_1662 4

int aplicar_limite1662(int valor) {
    if (valor > LIMITE_1662) return LIMITE_1662;
    return valor * FACTOR_1662;
}
