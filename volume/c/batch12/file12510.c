// fichero 12510 -- macros y constantes -- MODIFICADO
#define LIMITE_12510 12710
#define FACTOR_12510 2

int aplicar_limite12510(int valor) {
    if (valor > LIMITE_12510) return LIMITE_12510;
    return valor * FACTOR_12510;
}
