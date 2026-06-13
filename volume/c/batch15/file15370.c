// fichero 15370 -- macros y constantes
#define LIMITE_15370 15470
#define FACTOR_15370 1

int aplicar_limite15370(int valor) {
    if (valor > LIMITE_15370) return LIMITE_15370;
    return valor * FACTOR_15370;
}
