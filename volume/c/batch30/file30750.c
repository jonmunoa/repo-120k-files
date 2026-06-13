// fichero 30750 -- macros y constantes
#define LIMITE_30750 30850
#define FACTOR_30750 1

int aplicar_limite30750(int valor) {
    if (valor > LIMITE_30750) return LIMITE_30750;
    return valor * FACTOR_30750;
}
