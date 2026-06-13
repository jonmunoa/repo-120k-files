// fichero 38922 -- macros y constantes
#define LIMITE_38922 39022
#define FACTOR_38922 3

int aplicar_limite38922(int valor) {
    if (valor > LIMITE_38922) return LIMITE_38922;
    return valor * FACTOR_38922;
}
