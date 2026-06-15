// fichero 44274 -- macros y constantes -- MODIFICADO
#define LIMITE_44274 44474
#define FACTOR_44274 6

int aplicar_limite44274(int valor) {
    if (valor > LIMITE_44274) return LIMITE_44274;
    return valor * FACTOR_44274;
}
