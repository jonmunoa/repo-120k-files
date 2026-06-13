// fichero 42462 -- macros y constantes
#define LIMITE_42462 42562
#define FACTOR_42462 3

int aplicar_limite42462(int valor) {
    if (valor > LIMITE_42462) return LIMITE_42462;
    return valor * FACTOR_42462;
}
