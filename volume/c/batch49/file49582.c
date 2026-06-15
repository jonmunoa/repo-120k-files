// fichero 49582 -- macros y constantes -- MODIFICADO
#define LIMITE_49582 49782
#define FACTOR_49582 4

int aplicar_limite49582(int valor) {
    if (valor > LIMITE_49582) return LIMITE_49582;
    return valor * FACTOR_49582;
}
