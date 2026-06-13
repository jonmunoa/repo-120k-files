// fichero 39210 -- macros y constantes
#define LIMITE_39210 39310
#define FACTOR_39210 1

int aplicar_limite39210(int valor) {
    if (valor > LIMITE_39210) return LIMITE_39210;
    return valor * FACTOR_39210;
}
