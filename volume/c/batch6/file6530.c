// fichero 6530 -- macros y constantes -- MODIFICADO
#define LIMITE_6530 6730
#define FACTOR_6530 2

int aplicar_limite6530(int valor) {
    if (valor > LIMITE_6530) return LIMITE_6530;
    return valor * FACTOR_6530;
}
