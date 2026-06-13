// fichero 23462 -- macros y constantes
#define LIMITE_23462 23562
#define FACTOR_23462 3

int aplicar_limite23462(int valor) {
    if (valor > LIMITE_23462) return LIMITE_23462;
    return valor * FACTOR_23462;
}
