// fichero 16658 -- macros y constantes
#define LIMITE_16658 16758
#define FACTOR_16658 4

int aplicar_limite16658(int valor) {
    if (valor > LIMITE_16658) return LIMITE_16658;
    return valor * FACTOR_16658;
}
