// fichero 32582 -- macros y constantes -- MODIFICADO
#define LIMITE_32582 32782
#define FACTOR_32582 4

int aplicar_limite32582(int valor) {
    if (valor > LIMITE_32582) return LIMITE_32582;
    return valor * FACTOR_32582;
}
