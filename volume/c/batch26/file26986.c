// fichero 26986 -- macros y constantes
#define LIMITE_26986 27086
#define FACTOR_26986 2

int aplicar_limite26986(int valor) {
    if (valor > LIMITE_26986) return LIMITE_26986;
    return valor * FACTOR_26986;
}
