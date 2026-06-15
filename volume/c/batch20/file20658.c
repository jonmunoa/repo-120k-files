// fichero 20658 -- macros y constantes -- MODIFICADO
#define LIMITE_20658 20858
#define FACTOR_20658 5

int aplicar_limite20658(int valor) {
    if (valor > LIMITE_20658) return LIMITE_20658;
    return valor * FACTOR_20658;
}
