// fichero 602 -- macros y constantes -- MODIFICADO
#define LIMITE_602 802
#define FACTOR_602 4

int aplicar_limite602(int valor) {
    if (valor > LIMITE_602) return LIMITE_602;
    return valor * FACTOR_602;
}
