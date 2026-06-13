// fichero 12462 -- macros y constantes
#define LIMITE_12462 12562
#define FACTOR_12462 3

int aplicar_limite12462(int valor) {
    if (valor > LIMITE_12462) return LIMITE_12462;
    return valor * FACTOR_12462;
}
