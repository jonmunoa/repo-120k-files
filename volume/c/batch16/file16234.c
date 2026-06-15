// fichero 16234 -- macros y constantes -- MODIFICADO
#define LIMITE_16234 16434
#define FACTOR_16234 6

int aplicar_limite16234(int valor) {
    if (valor > LIMITE_16234) return LIMITE_16234;
    return valor * FACTOR_16234;
}
