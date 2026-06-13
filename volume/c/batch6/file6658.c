// fichero 6658 -- macros y constantes
#define LIMITE_6658 6758
#define FACTOR_6658 4

int aplicar_limite6658(int valor) {
    if (valor > LIMITE_6658) return LIMITE_6658;
    return valor * FACTOR_6658;
}
