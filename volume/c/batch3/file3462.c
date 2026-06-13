// fichero 3462 -- macros y constantes
#define LIMITE_3462 3562
#define FACTOR_3462 3

int aplicar_limite3462(int valor) {
    if (valor > LIMITE_3462) return LIMITE_3462;
    return valor * FACTOR_3462;
}
