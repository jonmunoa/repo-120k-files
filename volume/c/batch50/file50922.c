// fichero 50922 -- macros y constantes
#define LIMITE_50922 51022
#define FACTOR_50922 3

int aplicar_limite50922(int valor) {
    if (valor > LIMITE_50922) return LIMITE_50922;
    return valor * FACTOR_50922;
}
