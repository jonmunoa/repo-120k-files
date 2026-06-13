// fichero 2370 -- macros y constantes
#define LIMITE_2370 2470
#define FACTOR_2370 1

int aplicar_limite2370(int valor) {
    if (valor > LIMITE_2370) return LIMITE_2370;
    return valor * FACTOR_2370;
}
