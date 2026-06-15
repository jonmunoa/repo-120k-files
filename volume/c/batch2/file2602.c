// fichero 2602 -- macros y constantes -- MODIFICADO
#define LIMITE_2602 2802
#define FACTOR_2602 4

int aplicar_limite2602(int valor) {
    if (valor > LIMITE_2602) return LIMITE_2602;
    return valor * FACTOR_2602;
}
