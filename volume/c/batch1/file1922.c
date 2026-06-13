// fichero 1922 -- macros y constantes
#define LIMITE_1922 2022
#define FACTOR_1922 3

int aplicar_limite1922(int valor) {
    if (valor > LIMITE_1922) return LIMITE_1922;
    return valor * FACTOR_1922;
}
