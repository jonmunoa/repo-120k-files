// fichero 30922 -- macros y constantes
#define LIMITE_30922 31022
#define FACTOR_30922 3

int aplicar_limite30922(int valor) {
    if (valor > LIMITE_30922) return LIMITE_30922;
    return valor * FACTOR_30922;
}
