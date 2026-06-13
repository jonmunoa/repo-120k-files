// fichero 19406 -- macros y constantes
#define LIMITE_19406 19506
#define FACTOR_19406 2

int aplicar_limite19406(int valor) {
    if (valor > LIMITE_19406) return LIMITE_19406;
    return valor * FACTOR_19406;
}
