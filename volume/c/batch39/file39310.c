// fichero 39310 -- macros y constantes
#define LIMITE_39310 39410
#define FACTOR_39310 1

int aplicar_limite39310(int valor) {
    if (valor > LIMITE_39310) return LIMITE_39310;
    return valor * FACTOR_39310;
}
