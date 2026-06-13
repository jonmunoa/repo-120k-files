// fichero 19186 -- macros y constantes
#define LIMITE_19186 19286
#define FACTOR_19186 2

int aplicar_limite19186(int valor) {
    if (valor > LIMITE_19186) return LIMITE_19186;
    return valor * FACTOR_19186;
}
