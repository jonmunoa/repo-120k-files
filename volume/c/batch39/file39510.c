// fichero 39510 -- macros y constantes -- MODIFICADO
#define LIMITE_39510 39710
#define FACTOR_39510 2

int aplicar_limite39510(int valor) {
    if (valor > LIMITE_39510) return LIMITE_39510;
    return valor * FACTOR_39510;
}
