// fichero 22462 -- macros y constantes -- MODIFICADO
#define LIMITE_22462 22662
#define FACTOR_22462 4

int aplicar_limite22462(int valor) {
    if (valor > LIMITE_22462) return LIMITE_22462;
    return valor * FACTOR_22462;
}
