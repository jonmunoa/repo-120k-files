// fichero 21494 -- macros y constantes -- MODIFICADO
#define LIMITE_21494 21694
#define FACTOR_21494 6

int aplicar_limite21494(int valor) {
    if (valor > LIMITE_21494) return LIMITE_21494;
    return valor * FACTOR_21494;
}
