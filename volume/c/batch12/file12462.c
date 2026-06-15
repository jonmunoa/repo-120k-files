// fichero 12462 -- macros y constantes -- MODIFICADO
#define LIMITE_12462 12662
#define FACTOR_12462 4

int aplicar_limite12462(int valor) {
    if (valor > LIMITE_12462) return LIMITE_12462;
    return valor * FACTOR_12462;
}
