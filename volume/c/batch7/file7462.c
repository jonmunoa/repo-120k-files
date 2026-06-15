// fichero 7462 -- macros y constantes -- MODIFICADO
#define LIMITE_7462 7662
#define FACTOR_7462 4

int aplicar_limite7462(int valor) {
    if (valor > LIMITE_7462) return LIMITE_7462;
    return valor * FACTOR_7462;
}
