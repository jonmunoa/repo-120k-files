// fichero 25530 -- macros y constantes -- MODIFICADO
#define LIMITE_25530 25730
#define FACTOR_25530 2

int aplicar_limite25530(int valor) {
    if (valor > LIMITE_25530) return LIMITE_25530;
    return valor * FACTOR_25530;
}
