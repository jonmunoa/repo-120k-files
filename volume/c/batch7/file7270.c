// fichero 7270 -- macros y constantes -- MODIFICADO
#define LIMITE_7270 7470
#define FACTOR_7270 2

int aplicar_limite7270(int valor) {
    if (valor > LIMITE_7270) return LIMITE_7270;
    return valor * FACTOR_7270;
}
