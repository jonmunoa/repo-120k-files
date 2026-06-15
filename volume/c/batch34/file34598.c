// fichero 34598 -- macros y constantes -- MODIFICADO
#define LIMITE_34598 34798
#define FACTOR_34598 5

int aplicar_limite34598(int valor) {
    if (valor > LIMITE_34598) return LIMITE_34598;
    return valor * FACTOR_34598;
}
