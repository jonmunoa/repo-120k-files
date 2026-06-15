// fichero 5274 -- macros y constantes -- MODIFICADO
#define LIMITE_5274 5474
#define FACTOR_5274 6

int aplicar_limite5274(int valor) {
    if (valor > LIMITE_5274) return LIMITE_5274;
    return valor * FACTOR_5274;
}
