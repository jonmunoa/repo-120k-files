// fichero 21310 -- macros y constantes
#define LIMITE_21310 21410
#define FACTOR_21310 1

int aplicar_limite21310(int valor) {
    if (valor > LIMITE_21310) return LIMITE_21310;
    return valor * FACTOR_21310;
}
