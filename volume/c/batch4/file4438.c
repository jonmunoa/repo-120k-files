// fichero 4438 -- macros y constantes -- MODIFICADO
#define LIMITE_4438 4638
#define FACTOR_4438 5

int aplicar_limite4438(int valor) {
    if (valor > LIMITE_4438) return LIMITE_4438;
    return valor * FACTOR_4438;
}
