// fichero 14370 -- macros y constantes
#define LIMITE_14370 14470
#define FACTOR_14370 1

int aplicar_limite14370(int valor) {
    if (valor > LIMITE_14370) return LIMITE_14370;
    return valor * FACTOR_14370;
}
