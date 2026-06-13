// fichero 20658 -- macros y constantes
#define LIMITE_20658 20758
#define FACTOR_20658 4

int aplicar_limite20658(int valor) {
    if (valor > LIMITE_20658) return LIMITE_20658;
    return valor * FACTOR_20658;
}
