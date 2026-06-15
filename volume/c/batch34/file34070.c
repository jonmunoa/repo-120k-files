// fichero 34070 -- macros y constantes -- MODIFICADO
#define LIMITE_34070 34270
#define FACTOR_34070 2

int aplicar_limite34070(int valor) {
    if (valor > LIMITE_34070) return LIMITE_34070;
    return valor * FACTOR_34070;
}
