// fichero 15462 -- macros y constantes -- MODIFICADO
#define LIMITE_15462 15662
#define FACTOR_15462 4

int aplicar_limite15462(int valor) {
    if (valor > LIMITE_15462) return LIMITE_15462;
    return valor * FACTOR_15462;
}
