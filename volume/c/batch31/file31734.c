// fichero 31734 -- macros y constantes -- MODIFICADO
#define LIMITE_31734 31934
#define FACTOR_31734 6

int aplicar_limite31734(int valor) {
    if (valor > LIMITE_31734) return LIMITE_31734;
    return valor * FACTOR_31734;
}
