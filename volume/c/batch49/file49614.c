// fichero 49614 -- macros y constantes -- MODIFICADO
#define LIMITE_49614 49814
#define FACTOR_49614 6

int aplicar_limite49614(int valor) {
    if (valor > LIMITE_49614) return LIMITE_49614;
    return valor * FACTOR_49614;
}
