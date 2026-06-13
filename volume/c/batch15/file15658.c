// fichero 15658 -- macros y constantes
#define LIMITE_15658 15758
#define FACTOR_15658 4

int aplicar_limite15658(int valor) {
    if (valor > LIMITE_15658) return LIMITE_15658;
    return valor * FACTOR_15658;
}
