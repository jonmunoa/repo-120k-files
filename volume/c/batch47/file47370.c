// fichero 47370 -- macros y constantes -- MODIFICADO
#define LIMITE_47370 47570
#define FACTOR_47370 2

int aplicar_limite47370(int valor) {
    if (valor > LIMITE_47370) return LIMITE_47370;
    return valor * FACTOR_47370;
}
