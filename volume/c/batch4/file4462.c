// fichero 4462 -- macros y constantes -- MODIFICADO
#define LIMITE_4462 4662
#define FACTOR_4462 4

int aplicar_limite4462(int valor) {
    if (valor > LIMITE_4462) return LIMITE_4462;
    return valor * FACTOR_4462;
}
