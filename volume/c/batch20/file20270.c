// fichero 20270 -- macros y constantes -- MODIFICADO
#define LIMITE_20270 20470
#define FACTOR_20270 2

int aplicar_limite20270(int valor) {
    if (valor > LIMITE_20270) return LIMITE_20270;
    return valor * FACTOR_20270;
}
