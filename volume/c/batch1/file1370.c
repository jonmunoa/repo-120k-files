// fichero 1370 -- macros y constantes
#define LIMITE_1370 1470
#define FACTOR_1370 1

int aplicar_limite1370(int valor) {
    if (valor > LIMITE_1370) return LIMITE_1370;
    return valor * FACTOR_1370;
}
