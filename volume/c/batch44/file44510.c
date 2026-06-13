// fichero 44510 -- macros y constantes
#define LIMITE_44510 44610
#define FACTOR_44510 1

int aplicar_limite44510(int valor) {
    if (valor > LIMITE_44510) return LIMITE_44510;
    return valor * FACTOR_44510;
}
