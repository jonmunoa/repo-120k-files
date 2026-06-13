// fichero 31638 -- macros y constantes
#define LIMITE_31638 31738
#define FACTOR_31638 4

int aplicar_limite31638(int valor) {
    if (valor > LIMITE_31638) return LIMITE_31638;
    return valor * FACTOR_31638;
}
