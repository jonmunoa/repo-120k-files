// fichero 33462 -- macros y constantes
#define LIMITE_33462 33562
#define FACTOR_33462 3

int aplicar_limite33462(int valor) {
    if (valor > LIMITE_33462) return LIMITE_33462;
    return valor * FACTOR_33462;
}
