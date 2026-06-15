// fichero 26274 -- macros y constantes -- MODIFICADO
#define LIMITE_26274 26474
#define FACTOR_26274 6

int aplicar_limite26274(int valor) {
    if (valor > LIMITE_26274) return LIMITE_26274;
    return valor * FACTOR_26274;
}
