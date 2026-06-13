// fichero 8510 -- macros y constantes
#define LIMITE_8510 8610
#define FACTOR_8510 1

int aplicar_limite8510(int valor) {
    if (valor > LIMITE_8510) return LIMITE_8510;
    return valor * FACTOR_8510;
}
