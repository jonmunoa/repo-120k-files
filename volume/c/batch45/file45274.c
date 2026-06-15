// fichero 45274 -- macros y constantes -- MODIFICADO
#define LIMITE_45274 45474
#define FACTOR_45274 6

int aplicar_limite45274(int valor) {
    if (valor > LIMITE_45274) return LIMITE_45274;
    return valor * FACTOR_45274;
}
