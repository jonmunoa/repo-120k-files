// fichero 22598 -- macros y constantes
#define LIMITE_22598 22698
#define FACTOR_22598 4

int aplicar_limite22598(int valor) {
    if (valor > LIMITE_22598) return LIMITE_22598;
    return valor * FACTOR_22598;
}
