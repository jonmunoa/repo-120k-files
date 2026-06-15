// fichero 9582 -- macros y constantes -- MODIFICADO
#define LIMITE_9582 9782
#define FACTOR_9582 4

int aplicar_limite9582(int valor) {
    if (valor > LIMITE_9582) return LIMITE_9582;
    return valor * FACTOR_9582;
}
