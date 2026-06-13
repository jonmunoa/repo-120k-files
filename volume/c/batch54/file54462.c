// fichero 54462 -- macros y constantes
#define LIMITE_54462 54562
#define FACTOR_54462 3

int aplicar_limite54462(int valor) {
    if (valor > LIMITE_54462) return LIMITE_54462;
    return valor * FACTOR_54462;
}
