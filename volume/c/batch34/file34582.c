// fichero 34582 -- macros y constantes -- MODIFICADO
#define LIMITE_34582 34782
#define FACTOR_34582 4

int aplicar_limite34582(int valor) {
    if (valor > LIMITE_34582) return LIMITE_34582;
    return valor * FACTOR_34582;
}
