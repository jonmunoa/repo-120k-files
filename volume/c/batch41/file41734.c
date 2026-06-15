// fichero 41734 -- macros y constantes -- MODIFICADO
#define LIMITE_41734 41934
#define FACTOR_41734 6

int aplicar_limite41734(int valor) {
    if (valor > LIMITE_41734) return LIMITE_41734;
    return valor * FACTOR_41734;
}
