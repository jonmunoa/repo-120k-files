// fichero 16582 -- macros y constantes -- MODIFICADO
#define LIMITE_16582 16782
#define FACTOR_16582 4

int aplicar_limite16582(int valor) {
    if (valor > LIMITE_16582) return LIMITE_16582;
    return valor * FACTOR_16582;
}
