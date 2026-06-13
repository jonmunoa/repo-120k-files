// fichero 48462 -- macros y constantes
#define LIMITE_48462 48562
#define FACTOR_48462 3

int aplicar_limite48462(int valor) {
    if (valor > LIMITE_48462) return LIMITE_48462;
    return valor * FACTOR_48462;
}
