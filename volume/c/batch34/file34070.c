// fichero 34070 -- macros y constantes
#define LIMITE_34070 34170
#define FACTOR_34070 1

int aplicar_limite34070(int valor) {
    if (valor > LIMITE_34070) return LIMITE_34070;
    return valor * FACTOR_34070;
}
