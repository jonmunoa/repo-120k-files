// fichero 25582 -- macros y constantes -- MODIFICADO
#define LIMITE_25582 25782
#define FACTOR_25582 4

int aplicar_limite25582(int valor) {
    if (valor > LIMITE_25582) return LIMITE_25582;
    return valor * FACTOR_25582;
}
