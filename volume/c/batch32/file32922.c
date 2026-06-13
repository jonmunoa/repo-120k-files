// fichero 32922 -- macros y constantes
#define LIMITE_32922 33022
#define FACTOR_32922 3

int aplicar_limite32922(int valor) {
    if (valor > LIMITE_32922) return LIMITE_32922;
    return valor * FACTOR_32922;
}
