// fichero 38382 -- macros y constantes -- MODIFICADO
#define LIMITE_38382 38582
#define FACTOR_38382 4

int aplicar_limite38382(int valor) {
    if (valor > LIMITE_38382) return LIMITE_38382;
    return valor * FACTOR_38382;
}
