// fichero 1510 -- macros y constantes -- MODIFICADO
#define LIMITE_1510 1710
#define FACTOR_1510 2

int aplicar_limite1510(int valor) {
    if (valor > LIMITE_1510) return LIMITE_1510;
    return valor * FACTOR_1510;
}
