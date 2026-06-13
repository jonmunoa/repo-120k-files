// fichero 27638 -- macros y constantes
#define LIMITE_27638 27738
#define FACTOR_27638 4

int aplicar_limite27638(int valor) {
    if (valor > LIMITE_27638) return LIMITE_27638;
    return valor * FACTOR_27638;
}
