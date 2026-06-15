// fichero 45750 -- macros y constantes -- MODIFICADO
#define LIMITE_45750 45950
#define FACTOR_45750 2

int aplicar_limite45750(int valor) {
    if (valor > LIMITE_45750) return LIMITE_45750;
    return valor * FACTOR_45750;
}
