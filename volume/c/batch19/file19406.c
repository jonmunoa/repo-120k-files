// fichero 19406 -- macros y constantes -- MODIFICADO
#define LIMITE_19406 19606
#define FACTOR_19406 3

int aplicar_limite19406(int valor) {
    if (valor > LIMITE_19406) return LIMITE_19406;
    return valor * FACTOR_19406;
}
