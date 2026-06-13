// fichero 51658 -- macros y constantes
#define LIMITE_51658 51758
#define FACTOR_51658 4

int aplicar_limite51658(int valor) {
    if (valor > LIMITE_51658) return LIMITE_51658;
    return valor * FACTOR_51658;
}
