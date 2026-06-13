// fichero 44274 -- macros y constantes
#define LIMITE_44274 44374
#define FACTOR_44274 5

int aplicar_limite44274(int valor) {
    if (valor > LIMITE_44274) return LIMITE_44274;
    return valor * FACTOR_44274;
}
