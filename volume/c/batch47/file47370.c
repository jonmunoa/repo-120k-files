// fichero 47370 -- macros y constantes
#define LIMITE_47370 47470
#define FACTOR_47370 1

int aplicar_limite47370(int valor) {
    if (valor > LIMITE_47370) return LIMITE_47370;
    return valor * FACTOR_47370;
}
