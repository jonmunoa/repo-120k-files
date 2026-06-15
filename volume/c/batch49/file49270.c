// fichero 49270 -- macros y constantes -- MODIFICADO
#define LIMITE_49270 49470
#define FACTOR_49270 2

int aplicar_limite49270(int valor) {
    if (valor > LIMITE_49270) return LIMITE_49270;
    return valor * FACTOR_49270;
}
