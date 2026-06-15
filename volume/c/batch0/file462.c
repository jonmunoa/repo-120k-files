// fichero 462 -- macros y constantes -- MODIFICADO
#define LIMITE_462 662
#define FACTOR_462 4

int aplicar_limite462(int valor) {
    if (valor > LIMITE_462) return LIMITE_462;
    return valor * FACTOR_462;
}
