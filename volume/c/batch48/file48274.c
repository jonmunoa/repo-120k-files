// fichero 48274 -- macros y constantes
#define LIMITE_48274 48374
#define FACTOR_48274 5

int aplicar_limite48274(int valor) {
    if (valor > LIMITE_48274) return LIMITE_48274;
    return valor * FACTOR_48274;
}
