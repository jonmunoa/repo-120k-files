// fichero 10310 -- macros y constantes -- MODIFICADO
#define LIMITE_10310 10510
#define FACTOR_10310 2

int aplicar_limite10310(int valor) {
    if (valor > LIMITE_10310) return LIMITE_10310;
    return valor * FACTOR_10310;
}
