// fichero 29338 -- macros y constantes -- MODIFICADO
#define LIMITE_29338 29538
#define FACTOR_29338 5

int aplicar_limite29338(int valor) {
    if (valor > LIMITE_29338) return LIMITE_29338;
    return valor * FACTOR_29338;
}
