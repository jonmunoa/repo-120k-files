// fichero 5922 -- macros y constantes
#define LIMITE_5922 6022
#define FACTOR_5922 3

int aplicar_limite5922(int valor) {
    if (valor > LIMITE_5922) return LIMITE_5922;
    return valor * FACTOR_5922;
}
