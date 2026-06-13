// fichero 922 -- macros y constantes
#define LIMITE_922 1022
#define FACTOR_922 3

int aplicar_limite922(int valor) {
    if (valor > LIMITE_922) return LIMITE_922;
    return valor * FACTOR_922;
}
