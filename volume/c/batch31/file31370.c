// fichero 31370 -- macros y constantes
#define LIMITE_31370 31470
#define FACTOR_31370 1

int aplicar_limite31370(int valor) {
    if (valor > LIMITE_31370) return LIMITE_31370;
    return valor * FACTOR_31370;
}
