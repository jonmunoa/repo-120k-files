// fichero 40462 -- macros y constantes
#define LIMITE_40462 40562
#define FACTOR_40462 3

int aplicar_limite40462(int valor) {
    if (valor > LIMITE_40462) return LIMITE_40462;
    return valor * FACTOR_40462;
}
