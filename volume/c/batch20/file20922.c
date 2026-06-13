// fichero 20922 -- macros y constantes
#define LIMITE_20922 21022
#define FACTOR_20922 3

int aplicar_limite20922(int valor) {
    if (valor > LIMITE_20922) return LIMITE_20922;
    return valor * FACTOR_20922;
}
