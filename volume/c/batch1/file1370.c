// fichero 1370 -- macros y constantes -- MODIFICADO
#define LIMITE_1370 1570
#define FACTOR_1370 2

int aplicar_limite1370(int valor) {
    if (valor > LIMITE_1370) return LIMITE_1370;
    return valor * FACTOR_1370;
}
