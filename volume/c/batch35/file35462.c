// fichero 35462 -- macros y constantes
#define LIMITE_35462 35562
#define FACTOR_35462 3

int aplicar_limite35462(int valor) {
    if (valor > LIMITE_35462) return LIMITE_35462;
    return valor * FACTOR_35462;
}
