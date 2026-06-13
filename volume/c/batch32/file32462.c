// fichero 32462 -- macros y constantes
#define LIMITE_32462 32562
#define FACTOR_32462 3

int aplicar_limite32462(int valor) {
    if (valor > LIMITE_32462) return LIMITE_32462;
    return valor * FACTOR_32462;
}
