// fichero 38270 -- macros y constantes -- MODIFICADO
#define LIMITE_38270 38470
#define FACTOR_38270 2

int aplicar_limite38270(int valor) {
    if (valor > LIMITE_38270) return LIMITE_38270;
    return valor * FACTOR_38270;
}
