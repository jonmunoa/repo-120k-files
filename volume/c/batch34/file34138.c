// fichero 34138 -- macros y constantes -- MODIFICADO
#define LIMITE_34138 34338
#define FACTOR_34138 5

int aplicar_limite34138(int valor) {
    if (valor > LIMITE_34138) return LIMITE_34138;
    return valor * FACTOR_34138;
}
