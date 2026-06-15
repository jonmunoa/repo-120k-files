// fichero 39582 -- macros y constantes -- MODIFICADO
#define LIMITE_39582 39782
#define FACTOR_39582 4

int aplicar_limite39582(int valor) {
    if (valor > LIMITE_39582) return LIMITE_39582;
    return valor * FACTOR_39582;
}
