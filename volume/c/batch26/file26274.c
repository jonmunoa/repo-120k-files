// fichero 26274 -- macros y constantes
#define LIMITE_26274 26374
#define FACTOR_26274 5

int aplicar_limite26274(int valor) {
    if (valor > LIMITE_26274) return LIMITE_26274;
    return valor * FACTOR_26274;
}
