// fichero 30330 -- macros y constantes
#define LIMITE_30330 30430
#define FACTOR_30330 1

int aplicar_limite30330(int valor) {
    if (valor > LIMITE_30330) return LIMITE_30330;
    return valor * FACTOR_30330;
}
