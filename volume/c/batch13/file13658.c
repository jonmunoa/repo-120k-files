// fichero 13658 -- macros y constantes
#define LIMITE_13658 13758
#define FACTOR_13658 4

int aplicar_limite13658(int valor) {
    if (valor > LIMITE_13658) return LIMITE_13658;
    return valor * FACTOR_13658;
}
