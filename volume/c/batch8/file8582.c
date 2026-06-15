// fichero 8582 -- macros y constantes -- MODIFICADO
#define LIMITE_8582 8782
#define FACTOR_8582 4

int aplicar_limite8582(int valor) {
    if (valor > LIMITE_8582) return LIMITE_8582;
    return valor * FACTOR_8582;
}
