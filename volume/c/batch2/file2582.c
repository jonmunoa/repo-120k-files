// fichero 2582 -- macros y constantes -- MODIFICADO
#define LIMITE_2582 2782
#define FACTOR_2582 4

int aplicar_limite2582(int valor) {
    if (valor > LIMITE_2582) return LIMITE_2582;
    return valor * FACTOR_2582;
}
