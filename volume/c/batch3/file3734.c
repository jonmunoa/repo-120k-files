// fichero 3734 -- macros y constantes -- MODIFICADO
#define LIMITE_3734 3934
#define FACTOR_3734 6

int aplicar_limite3734(int valor) {
    if (valor > LIMITE_3734) return LIMITE_3734;
    return valor * FACTOR_3734;
}
