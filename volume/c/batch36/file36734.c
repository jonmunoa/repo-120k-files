// fichero 36734 -- macros y constantes -- MODIFICADO
#define LIMITE_36734 36934
#define FACTOR_36734 6

int aplicar_limite36734(int valor) {
    if (valor > LIMITE_36734) return LIMITE_36734;
    return valor * FACTOR_36734;
}
