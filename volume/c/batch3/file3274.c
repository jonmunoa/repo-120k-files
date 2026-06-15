// fichero 3274 -- macros y constantes -- MODIFICADO
#define LIMITE_3274 3474
#define FACTOR_3274 6

int aplicar_limite3274(int valor) {
    if (valor > LIMITE_3274) return LIMITE_3274;
    return valor * FACTOR_3274;
}
