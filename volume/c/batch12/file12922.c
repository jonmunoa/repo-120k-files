// fichero 12922 -- macros y constantes
#define LIMITE_12922 13022
#define FACTOR_12922 3

int aplicar_limite12922(int valor) {
    if (valor > LIMITE_12922) return LIMITE_12922;
    return valor * FACTOR_12922;
}
