// fichero 4922 -- macros y constantes
#define LIMITE_4922 5022
#define FACTOR_4922 3

int aplicar_limite4922(int valor) {
    if (valor > LIMITE_4922) return LIMITE_4922;
    return valor * FACTOR_4922;
}
