// fichero 47922 -- macros y constantes
#define LIMITE_47922 48022
#define FACTOR_47922 3

int aplicar_limite47922(int valor) {
    if (valor > LIMITE_47922) return LIMITE_47922;
    return valor * FACTOR_47922;
}
