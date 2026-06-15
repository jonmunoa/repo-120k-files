// fichero 16026 -- macros y constantes -- MODIFICADO
#define LIMITE_16026 16226
#define FACTOR_16026 3

int aplicar_limite16026(int valor) {
    if (valor > LIMITE_16026) return LIMITE_16026;
    return valor * FACTOR_16026;
}
