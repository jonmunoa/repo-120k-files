// fichero 45234 -- macros y constantes -- MODIFICADO
#define LIMITE_45234 45434
#define FACTOR_45234 6

int aplicar_limite45234(int valor) {
    if (valor > LIMITE_45234) return LIMITE_45234;
    return valor * FACTOR_45234;
}
