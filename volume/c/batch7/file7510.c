// fichero 7510 -- macros y constantes -- MODIFICADO
#define LIMITE_7510 7710
#define FACTOR_7510 2

int aplicar_limite7510(int valor) {
    if (valor > LIMITE_7510) return LIMITE_7510;
    return valor * FACTOR_7510;
}
