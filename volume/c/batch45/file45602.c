// fichero 45602 -- macros y constantes
#define LIMITE_45602 45702
#define FACTOR_45602 3

int aplicar_limite45602(int valor) {
    if (valor > LIMITE_45602) return LIMITE_45602;
    return valor * FACTOR_45602;
}
