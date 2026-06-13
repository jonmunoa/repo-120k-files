// fichero 23638 -- macros y constantes
#define LIMITE_23638 23738
#define FACTOR_23638 4

int aplicar_limite23638(int valor) {
    if (valor > LIMITE_23638) return LIMITE_23638;
    return valor * FACTOR_23638;
}
