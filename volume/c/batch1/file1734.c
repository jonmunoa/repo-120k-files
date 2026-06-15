// fichero 1734 -- macros y constantes -- MODIFICADO
#define LIMITE_1734 1934
#define FACTOR_1734 6

int aplicar_limite1734(int valor) {
    if (valor > LIMITE_1734) return LIMITE_1734;
    return valor * FACTOR_1734;
}
