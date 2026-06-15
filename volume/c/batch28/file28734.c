// fichero 28734 -- macros y constantes -- MODIFICADO
#define LIMITE_28734 28934
#define FACTOR_28734 6

int aplicar_limite28734(int valor) {
    if (valor > LIMITE_28734) return LIMITE_28734;
    return valor * FACTOR_28734;
}
