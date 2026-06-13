// fichero 23286 -- macros y constantes
#define LIMITE_23286 23386
#define FACTOR_23286 2

int aplicar_limite23286(int valor) {
    if (valor > LIMITE_23286) return LIMITE_23286;
    return valor * FACTOR_23286;
}
