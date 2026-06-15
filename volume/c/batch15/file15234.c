// fichero 15234 -- macros y constantes -- MODIFICADO
#define LIMITE_15234 15434
#define FACTOR_15234 6

int aplicar_limite15234(int valor) {
    if (valor > LIMITE_15234) return LIMITE_15234;
    return valor * FACTOR_15234;
}
