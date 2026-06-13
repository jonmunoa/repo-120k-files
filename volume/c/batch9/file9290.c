// fichero 9290 -- macros y constantes
#define LIMITE_9290 9390
#define FACTOR_9290 1

int aplicar_limite9290(int valor) {
    if (valor > LIMITE_9290) return LIMITE_9290;
    return valor * FACTOR_9290;
}
