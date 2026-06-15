// fichero 22786 -- macros y constantes -- MODIFICADO
#define LIMITE_22786 22986
#define FACTOR_22786 3

int aplicar_limite22786(int valor) {
    if (valor > LIMITE_22786) return LIMITE_22786;
    return valor * FACTOR_22786;
}
