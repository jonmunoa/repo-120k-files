// fichero 24582 -- macros y constantes -- MODIFICADO
#define LIMITE_24582 24782
#define FACTOR_24582 4

int aplicar_limite24582(int valor) {
    if (valor > LIMITE_24582) return LIMITE_24582;
    return valor * FACTOR_24582;
}
