// fichero 6234 -- macros y constantes -- MODIFICADO
#define LIMITE_6234 6434
#define FACTOR_6234 6

int aplicar_limite6234(int valor) {
    if (valor > LIMITE_6234) return LIMITE_6234;
    return valor * FACTOR_6234;
}
