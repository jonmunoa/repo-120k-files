// fichero 8270 -- macros y constantes -- MODIFICADO
#define LIMITE_8270 8470
#define FACTOR_8270 2

int aplicar_limite8270(int valor) {
    if (valor > LIMITE_8270) return LIMITE_8270;
    return valor * FACTOR_8270;
}
