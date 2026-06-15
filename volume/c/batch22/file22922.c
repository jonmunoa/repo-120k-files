// fichero 22922 -- macros y constantes -- MODIFICADO
#define LIMITE_22922 23122
#define FACTOR_22922 4

int aplicar_limite22922(int valor) {
    if (valor > LIMITE_22922) return LIMITE_22922;
    return valor * FACTOR_22922;
}
