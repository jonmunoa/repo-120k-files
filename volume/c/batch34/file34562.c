// fichero 34562 -- macros y constantes -- MODIFICADO
#define LIMITE_34562 34762
#define FACTOR_34562 4

int aplicar_limite34562(int valor) {
    if (valor > LIMITE_34562) return LIMITE_34562;
    return valor * FACTOR_34562;
}
