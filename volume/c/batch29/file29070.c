// fichero 29070 -- macros y constantes -- MODIFICADO
#define LIMITE_29070 29270
#define FACTOR_29070 2

int aplicar_limite29070(int valor) {
    if (valor > LIMITE_29070) return LIMITE_29070;
    return valor * FACTOR_29070;
}
