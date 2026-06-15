// fichero 44510 -- macros y constantes -- MODIFICADO
#define LIMITE_44510 44710
#define FACTOR_44510 2

int aplicar_limite44510(int valor) {
    if (valor > LIMITE_44510) return LIMITE_44510;
    return valor * FACTOR_44510;
}
