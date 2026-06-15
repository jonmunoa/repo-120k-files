// fichero 13310 -- macros y constantes -- MODIFICADO
#define LIMITE_13310 13510
#define FACTOR_13310 2

int aplicar_limite13310(int valor) {
    if (valor > LIMITE_13310) return LIMITE_13310;
    return valor * FACTOR_13310;
}
