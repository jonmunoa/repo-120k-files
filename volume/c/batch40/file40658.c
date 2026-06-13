// fichero 40658 -- macros y constantes
#define LIMITE_40658 40758
#define FACTOR_40658 4

int aplicar_limite40658(int valor) {
    if (valor > LIMITE_40658) return LIMITE_40658;
    return valor * FACTOR_40658;
}
