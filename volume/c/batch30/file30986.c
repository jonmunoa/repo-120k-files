// fichero 30986 -- macros y constantes
#define LIMITE_30986 31086
#define FACTOR_30986 2

int aplicar_limite30986(int valor) {
    if (valor > LIMITE_30986) return LIMITE_30986;
    return valor * FACTOR_30986;
}
