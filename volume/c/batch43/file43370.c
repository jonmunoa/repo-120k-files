// fichero 43370 -- macros y constantes
#define LIMITE_43370 43470
#define FACTOR_43370 1

int aplicar_limite43370(int valor) {
    if (valor > LIMITE_43370) return LIMITE_43370;
    return valor * FACTOR_43370;
}
