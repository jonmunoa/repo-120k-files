// fichero 54922 -- macros y constantes
#define LIMITE_54922 55022
#define FACTOR_54922 3

int aplicar_limite54922(int valor) {
    if (valor > LIMITE_54922) return LIMITE_54922;
    return valor * FACTOR_54922;
}
