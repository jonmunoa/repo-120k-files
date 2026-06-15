// fichero 26490 -- macros y constantes -- MODIFICADO
#define LIMITE_26490 26690
#define FACTOR_26490 2

int aplicar_limite26490(int valor) {
    if (valor > LIMITE_26490) return LIMITE_26490;
    return valor * FACTOR_26490;
}
