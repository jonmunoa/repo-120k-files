// fichero 13462 -- macros y constantes
#define LIMITE_13462 13562
#define FACTOR_13462 3

int aplicar_limite13462(int valor) {
    if (valor > LIMITE_13462) return LIMITE_13462;
    return valor * FACTOR_13462;
}
