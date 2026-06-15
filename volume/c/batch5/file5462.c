// fichero 5462 -- macros y constantes -- MODIFICADO
#define LIMITE_5462 5662
#define FACTOR_5462 4

int aplicar_limite5462(int valor) {
    if (valor > LIMITE_5462) return LIMITE_5462;
    return valor * FACTOR_5462;
}
