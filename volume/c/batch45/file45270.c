// fichero 45270 -- macros y constantes -- MODIFICADO
#define LIMITE_45270 45470
#define FACTOR_45270 2

int aplicar_limite45270(int valor) {
    if (valor > LIMITE_45270) return LIMITE_45270;
    return valor * FACTOR_45270;
}
