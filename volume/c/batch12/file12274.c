// fichero 12274 -- macros y constantes -- MODIFICADO
#define LIMITE_12274 12474
#define FACTOR_12274 6

int aplicar_limite12274(int valor) {
    if (valor > LIMITE_12274) return LIMITE_12274;
    return valor * FACTOR_12274;
}
