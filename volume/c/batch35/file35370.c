// fichero 35370 -- macros y constantes
#define LIMITE_35370 35470
#define FACTOR_35370 1

int aplicar_limite35370(int valor) {
    if (valor > LIMITE_35370) return LIMITE_35370;
    return valor * FACTOR_35370;
}
