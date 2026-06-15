// fichero 26370 -- macros y constantes -- MODIFICADO
#define LIMITE_26370 26570
#define FACTOR_26370 2

int aplicar_limite26370(int valor) {
    if (valor > LIMITE_26370) return LIMITE_26370;
    return valor * FACTOR_26370;
}
