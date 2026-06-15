// fichero 22954 -- macros y constantes -- MODIFICADO
#define LIMITE_22954 23154
#define FACTOR_22954 6

int aplicar_limite22954(int valor) {
    if (valor > LIMITE_22954) return LIMITE_22954;
    return valor * FACTOR_22954;
}
