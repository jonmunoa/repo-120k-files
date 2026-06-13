// fichero 17370 -- macros y constantes
#define LIMITE_17370 17470
#define FACTOR_17370 1

int aplicar_limite17370(int valor) {
    if (valor > LIMITE_17370) return LIMITE_17370;
    return valor * FACTOR_17370;
}
