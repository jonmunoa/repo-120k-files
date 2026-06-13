// fichero 19638 -- macros y constantes
#define LIMITE_19638 19738
#define FACTOR_19638 4

int aplicar_limite19638(int valor) {
    if (valor > LIMITE_19638) return LIMITE_19638;
    return valor * FACTOR_19638;
}
