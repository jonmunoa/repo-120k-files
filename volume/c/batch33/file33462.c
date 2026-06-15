// fichero 33462 -- macros y constantes -- MODIFICADO
#define LIMITE_33462 33662
#define FACTOR_33462 4

int aplicar_limite33462(int valor) {
    if (valor > LIMITE_33462) return LIMITE_33462;
    return valor * FACTOR_33462;
}
