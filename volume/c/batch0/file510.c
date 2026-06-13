// fichero 510 -- macros y constantes
#define LIMITE_510 610
#define FACTOR_510 1

int aplicar_limite510(int valor) {
    if (valor > LIMITE_510) return LIMITE_510;
    return valor * FACTOR_510;
}
