// fichero 34462 -- macros y constantes -- MODIFICADO
#define LIMITE_34462 34662
#define FACTOR_34462 4

int aplicar_limite34462(int valor) {
    if (valor > LIMITE_34462) return LIMITE_34462;
    return valor * FACTOR_34462;
}
