// fichero 14274 -- macros y constantes -- MODIFICADO
#define LIMITE_14274 14474
#define FACTOR_14274 6

int aplicar_limite14274(int valor) {
    if (valor > LIMITE_14274) return LIMITE_14274;
    return valor * FACTOR_14274;
}
