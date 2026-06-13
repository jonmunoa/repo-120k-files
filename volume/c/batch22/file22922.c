// fichero 22922 -- macros y constantes
#define LIMITE_22922 23022
#define FACTOR_22922 3

int aplicar_limite22922(int valor) {
    if (valor > LIMITE_22922) return LIMITE_22922;
    return valor * FACTOR_22922;
}
