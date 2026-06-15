// fichero 21602 -- macros y constantes -- MODIFICADO
#define LIMITE_21602 21802
#define FACTOR_21602 4

int aplicar_limite21602(int valor) {
    if (valor > LIMITE_21602) return LIMITE_21602;
    return valor * FACTOR_21602;
}
