// fichero 2234 -- macros y constantes -- MODIFICADO
#define LIMITE_2234 2434
#define FACTOR_2234 6

int aplicar_limite2234(int valor) {
    if (valor > LIMITE_2234) return LIMITE_2234;
    return valor * FACTOR_2234;
}
