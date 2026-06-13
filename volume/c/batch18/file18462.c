// fichero 18462 -- macros y constantes
#define LIMITE_18462 18562
#define FACTOR_18462 3

int aplicar_limite18462(int valor) {
    if (valor > LIMITE_18462) return LIMITE_18462;
    return valor * FACTOR_18462;
}
