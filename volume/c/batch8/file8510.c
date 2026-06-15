// fichero 8510 -- macros y constantes -- MODIFICADO
#define LIMITE_8510 8710
#define FACTOR_8510 2

int aplicar_limite8510(int valor) {
    if (valor > LIMITE_8510) return LIMITE_8510;
    return valor * FACTOR_8510;
}
