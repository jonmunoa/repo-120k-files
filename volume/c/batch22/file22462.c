// fichero 22462 -- macros y constantes
#define LIMITE_22462 22562
#define FACTOR_22462 3

int aplicar_limite22462(int valor) {
    if (valor > LIMITE_22462) return LIMITE_22462;
    return valor * FACTOR_22462;
}
