// fichero 23186 -- macros y constantes
#define LIMITE_23186 23286
#define FACTOR_23186 2

int aplicar_limite23186(int valor) {
    if (valor > LIMITE_23186) return LIMITE_23186;
    return valor * FACTOR_23186;
}
