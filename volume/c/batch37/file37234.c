// fichero 37234 -- macros y constantes -- MODIFICADO
#define LIMITE_37234 37434
#define FACTOR_37234 6

int aplicar_limite37234(int valor) {
    if (valor > LIMITE_37234) return LIMITE_37234;
    return valor * FACTOR_37234;
}
