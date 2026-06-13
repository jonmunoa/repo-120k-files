// fichero 19310 -- macros y constantes
#define LIMITE_19310 19410
#define FACTOR_19310 1

int aplicar_limite19310(int valor) {
    if (valor > LIMITE_19310) return LIMITE_19310;
    return valor * FACTOR_19310;
}
