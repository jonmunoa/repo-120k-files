// fichero 8462 -- macros y constantes
#define LIMITE_8462 8562
#define FACTOR_8462 3

int aplicar_limite8462(int valor) {
    if (valor > LIMITE_8462) return LIMITE_8462;
    return valor * FACTOR_8462;
}
