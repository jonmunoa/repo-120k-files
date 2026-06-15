// fichero 1922 -- macros y constantes -- MODIFICADO
#define LIMITE_1922 2122
#define FACTOR_1922 4

int aplicar_limite1922(int valor) {
    if (valor > LIMITE_1922) return LIMITE_1922;
    return valor * FACTOR_1922;
}
