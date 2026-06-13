// fichero 30486 -- macros y constantes
#define LIMITE_30486 30586
#define FACTOR_30486 2

int aplicar_limite30486(int valor) {
    if (valor > LIMITE_30486) return LIMITE_30486;
    return valor * FACTOR_30486;
}
