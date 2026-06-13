// fichero 34582 -- macros y constantes
#define LIMITE_34582 34682
#define FACTOR_34582 3

int aplicar_limite34582(int valor) {
    if (valor > LIMITE_34582) return LIMITE_34582;
    return valor * FACTOR_34582;
}
