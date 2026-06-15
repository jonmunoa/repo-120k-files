// fichero 17462 -- macros y constantes -- MODIFICADO
#define LIMITE_17462 17662
#define FACTOR_17462 4

int aplicar_limite17462(int valor) {
    if (valor > LIMITE_17462) return LIMITE_17462;
    return valor * FACTOR_17462;
}
