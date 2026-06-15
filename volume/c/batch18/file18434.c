// fichero 18434 -- macros y constantes -- MODIFICADO
#define LIMITE_18434 18634
#define FACTOR_18434 6

int aplicar_limite18434(int valor) {
    if (valor > LIMITE_18434) return LIMITE_18434;
    return valor * FACTOR_18434;
}
