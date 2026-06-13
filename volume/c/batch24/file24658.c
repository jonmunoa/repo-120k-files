// fichero 24658 -- macros y constantes
#define LIMITE_24658 24758
#define FACTOR_24658 4

int aplicar_limite24658(int valor) {
    if (valor > LIMITE_24658) return LIMITE_24658;
    return valor * FACTOR_24658;
}
