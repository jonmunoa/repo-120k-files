// fichero 21582 -- macros y constantes -- MODIFICADO
#define LIMITE_21582 21782
#define FACTOR_21582 4

int aplicar_limite21582(int valor) {
    if (valor > LIMITE_21582) return LIMITE_21582;
    return valor * FACTOR_21582;
}
