// fichero 41482 -- macros y constantes
#define LIMITE_41482 41582
#define FACTOR_41482 3

int aplicar_limite41482(int valor) {
    if (valor > LIMITE_41482) return LIMITE_41482;
    return valor * FACTOR_41482;
}
