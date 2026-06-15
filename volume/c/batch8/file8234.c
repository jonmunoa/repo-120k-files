// fichero 8234 -- macros y constantes -- MODIFICADO
#define LIMITE_8234 8434
#define FACTOR_8234 6

int aplicar_limite8234(int valor) {
    if (valor > LIMITE_8234) return LIMITE_8234;
    return valor * FACTOR_8234;
}
