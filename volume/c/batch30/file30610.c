// fichero 30610 -- macros y constantes
#define LIMITE_30610 30710
#define FACTOR_30610 1

int aplicar_limite30610(int valor) {
    if (valor > LIMITE_30610) return LIMITE_30610;
    return valor * FACTOR_30610;
}
