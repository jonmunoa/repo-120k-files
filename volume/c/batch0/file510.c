// fichero 510 -- macros y constantes -- MODIFICADO
#define LIMITE_510 710
#define FACTOR_510 2

int aplicar_limite510(int valor) {
    if (valor > LIMITE_510) return LIMITE_510;
    return valor * FACTOR_510;
}
