// fichero 41406 -- macros y constantes -- MODIFICADO
#define LIMITE_41406 41606
#define FACTOR_41406 3

int aplicar_limite41406(int valor) {
    if (valor > LIMITE_41406) return LIMITE_41406;
    return valor * FACTOR_41406;
}
