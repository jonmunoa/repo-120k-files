// fichero 51462 -- macros y constantes
#define LIMITE_51462 51562
#define FACTOR_51462 3

int aplicar_limite51462(int valor) {
    if (valor > LIMITE_51462) return LIMITE_51462;
    return valor * FACTOR_51462;
}
