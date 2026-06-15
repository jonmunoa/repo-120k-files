// fichero 38734 -- macros y constantes -- MODIFICADO
#define LIMITE_38734 38934
#define FACTOR_38734 6

int aplicar_limite38734(int valor) {
    if (valor > LIMITE_38734) return LIMITE_38734;
    return valor * FACTOR_38734;
}
