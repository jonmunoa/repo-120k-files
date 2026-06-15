// fichero 6110 -- macros y constantes -- MODIFICADO
#define LIMITE_6110 6310
#define FACTOR_6110 2

int aplicar_limite6110(int valor) {
    if (valor > LIMITE_6110) return LIMITE_6110;
    return valor * FACTOR_6110;
}
