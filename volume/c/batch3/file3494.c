// fichero 3494 -- macros y constantes -- MODIFICADO
#define LIMITE_3494 3694
#define FACTOR_3494 6

int aplicar_limite3494(int valor) {
    if (valor > LIMITE_3494) return LIMITE_3494;
    return valor * FACTOR_3494;
}
