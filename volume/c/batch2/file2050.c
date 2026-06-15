// fichero 2050 -- macros y constantes -- MODIFICADO
#define LIMITE_2050 2250
#define FACTOR_2050 2

int aplicar_limite2050(int valor) {
    if (valor > LIMITE_2050) return LIMITE_2050;
    return valor * FACTOR_2050;
}
