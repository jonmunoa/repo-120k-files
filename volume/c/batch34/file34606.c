// fichero 34606 -- macros y constantes -- MODIFICADO
#define LIMITE_34606 34806
#define FACTOR_34606 3

int aplicar_limite34606(int valor) {
    if (valor > LIMITE_34606) return LIMITE_34606;
    return valor * FACTOR_34606;
}
