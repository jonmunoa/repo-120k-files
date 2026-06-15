// fichero 23462 -- macros y constantes -- MODIFICADO
#define LIMITE_23462 23662
#define FACTOR_23462 4

int aplicar_limite23462(int valor) {
    if (valor > LIMITE_23462) return LIMITE_23462;
    return valor * FACTOR_23462;
}
