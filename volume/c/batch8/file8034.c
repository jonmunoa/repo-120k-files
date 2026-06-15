// fichero 8034 -- macros y constantes -- MODIFICADO
#define LIMITE_8034 8234
#define FACTOR_8034 6

int aplicar_limite8034(int valor) {
    if (valor > LIMITE_8034) return LIMITE_8034;
    return valor * FACTOR_8034;
}
