// fichero 3310 -- macros y constantes
#define LIMITE_3310 3410
#define FACTOR_3310 1

int aplicar_limite3310(int valor) {
    if (valor > LIMITE_3310) return LIMITE_3310;
    return valor * FACTOR_3310;
}
