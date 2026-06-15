// fichero 16274 -- macros y constantes -- MODIFICADO
#define LIMITE_16274 16474
#define FACTOR_16274 6

int aplicar_limite16274(int valor) {
    if (valor > LIMITE_16274) return LIMITE_16274;
    return valor * FACTOR_16274;
}
