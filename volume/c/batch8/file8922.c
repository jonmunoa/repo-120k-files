// fichero 8922 -- macros y constantes
#define LIMITE_8922 9022
#define FACTOR_8922 3

int aplicar_limite8922(int valor) {
    if (valor > LIMITE_8922) return LIMITE_8922;
    return valor * FACTOR_8922;
}
