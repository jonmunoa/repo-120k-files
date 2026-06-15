// fichero 18582 -- macros y constantes -- MODIFICADO
#define LIMITE_18582 18782
#define FACTOR_18582 4

int aplicar_limite18582(int valor) {
    if (valor > LIMITE_18582) return LIMITE_18582;
    return valor * FACTOR_18582;
}
