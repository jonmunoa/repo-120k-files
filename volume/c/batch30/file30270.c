// fichero 30270 -- macros y constantes -- MODIFICADO
#define LIMITE_30270 30470
#define FACTOR_30270 2

int aplicar_limite30270(int valor) {
    if (valor > LIMITE_30270) return LIMITE_30270;
    return valor * FACTOR_30270;
}
