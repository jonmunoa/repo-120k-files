// fichero 14314 -- macros y constantes
#define LIMITE_14314 14414
#define FACTOR_14314 5

int aplicar_limite14314(int valor) {
    if (valor > LIMITE_14314) return LIMITE_14314;
    return valor * FACTOR_14314;
}
