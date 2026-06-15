// fichero 43370 -- macros y constantes -- MODIFICADO
#define LIMITE_43370 43570
#define FACTOR_43370 2

int aplicar_limite43370(int valor) {
    if (valor > LIMITE_43370) return LIMITE_43370;
    return valor * FACTOR_43370;
}
