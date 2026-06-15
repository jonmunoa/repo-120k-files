// fichero 5530 -- macros y constantes -- MODIFICADO
#define LIMITE_5530 5730
#define FACTOR_5530 2

int aplicar_limite5530(int valor) {
    if (valor > LIMITE_5530) return LIMITE_5530;
    return valor * FACTOR_5530;
}
