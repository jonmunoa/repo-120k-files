// fichero 922 -- macros y constantes -- MODIFICADO
#define LIMITE_922 1122
#define FACTOR_922 4

int aplicar_limite922(int valor) {
    if (valor > LIMITE_922) return LIMITE_922;
    return valor * FACTOR_922;
}
