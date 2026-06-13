// fichero 3370 -- macros y constantes
#define LIMITE_3370 3470
#define FACTOR_3370 1

int aplicar_limite3370(int valor) {
    if (valor > LIMITE_3370) return LIMITE_3370;
    return valor * FACTOR_3370;
}
