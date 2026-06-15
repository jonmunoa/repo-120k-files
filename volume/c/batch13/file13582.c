// fichero 13582 -- macros y constantes -- MODIFICADO
#define LIMITE_13582 13782
#define FACTOR_13582 4

int aplicar_limite13582(int valor) {
    if (valor > LIMITE_13582) return LIMITE_13582;
    return valor * FACTOR_13582;
}
