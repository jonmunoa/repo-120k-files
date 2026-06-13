// fichero 31658 -- macros y constantes
#define LIMITE_31658 31758
#define FACTOR_31658 4

int aplicar_limite31658(int valor) {
    if (valor > LIMITE_31658) return LIMITE_31658;
    return valor * FACTOR_31658;
}
