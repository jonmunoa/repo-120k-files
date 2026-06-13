// fichero 15510 -- macros y constantes
#define LIMITE_15510 15610
#define FACTOR_15510 1

int aplicar_limite15510(int valor) {
    if (valor > LIMITE_15510) return LIMITE_15510;
    return valor * FACTOR_15510;
}
