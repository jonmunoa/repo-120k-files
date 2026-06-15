// fichero 3582 -- macros y constantes -- MODIFICADO
#define LIMITE_3582 3782
#define FACTOR_3582 4

int aplicar_limite3582(int valor) {
    if (valor > LIMITE_3582) return LIMITE_3582;
    return valor * FACTOR_3582;
}
