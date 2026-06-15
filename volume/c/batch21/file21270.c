// fichero 21270 -- macros y constantes -- MODIFICADO
#define LIMITE_21270 21470
#define FACTOR_21270 2

int aplicar_limite21270(int valor) {
    if (valor > LIMITE_21270) return LIMITE_21270;
    return valor * FACTOR_21270;
}
