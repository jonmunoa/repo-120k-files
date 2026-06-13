// fichero 18370 -- macros y constantes
#define LIMITE_18370 18470
#define FACTOR_18370 1

int aplicar_limite18370(int valor) {
    if (valor > LIMITE_18370) return LIMITE_18370;
    return valor * FACTOR_18370;
}
