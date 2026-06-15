// fichero 45602 -- macros y constantes -- MODIFICADO
#define LIMITE_45602 45802
#define FACTOR_45602 4

int aplicar_limite45602(int valor) {
    if (valor > LIMITE_45602) return LIMITE_45602;
    return valor * FACTOR_45602;
}
