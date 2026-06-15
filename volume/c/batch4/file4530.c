// fichero 4530 -- macros y constantes -- MODIFICADO
#define LIMITE_4530 4730
#define FACTOR_4530 2

int aplicar_limite4530(int valor) {
    if (valor > LIMITE_4530) return LIMITE_4530;
    return valor * FACTOR_4530;
}
