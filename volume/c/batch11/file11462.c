// fichero 11462 -- macros y constantes -- MODIFICADO
#define LIMITE_11462 11662
#define FACTOR_11462 4

int aplicar_limite11462(int valor) {
    if (valor > LIMITE_11462) return LIMITE_11462;
    return valor * FACTOR_11462;
}
