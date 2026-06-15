// fichero 4510 -- macros y constantes -- MODIFICADO
#define LIMITE_4510 4710
#define FACTOR_4510 2

int aplicar_limite4510(int valor) {
    if (valor > LIMITE_4510) return LIMITE_4510;
    return valor * FACTOR_4510;
}
