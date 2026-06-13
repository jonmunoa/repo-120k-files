// fichero 17922 -- macros y constantes
#define LIMITE_17922 18022
#define FACTOR_17922 3

int aplicar_limite17922(int valor) {
    if (valor > LIMITE_17922) return LIMITE_17922;
    return valor * FACTOR_17922;
}
