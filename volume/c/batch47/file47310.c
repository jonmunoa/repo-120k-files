// fichero 47310 -- macros y constantes
#define LIMITE_47310 47410
#define FACTOR_47310 1

int aplicar_limite47310(int valor) {
    if (valor > LIMITE_47310) return LIMITE_47310;
    return valor * FACTOR_47310;
}
