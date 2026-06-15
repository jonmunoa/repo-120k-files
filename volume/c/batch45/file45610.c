// fichero 45610 -- macros y constantes -- MODIFICADO
#define LIMITE_45610 45810
#define FACTOR_45610 2

int aplicar_limite45610(int valor) {
    if (valor > LIMITE_45610) return LIMITE_45610;
    return valor * FACTOR_45610;
}
