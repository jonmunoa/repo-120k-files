// fichero 39270 -- macros y constantes -- MODIFICADO
#define LIMITE_39270 39470
#define FACTOR_39270 2

int aplicar_limite39270(int valor) {
    if (valor > LIMITE_39270) return LIMITE_39270;
    return valor * FACTOR_39270;
}
