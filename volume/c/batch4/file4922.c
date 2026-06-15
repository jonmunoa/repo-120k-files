// fichero 4922 -- macros y constantes -- MODIFICADO
#define LIMITE_4922 5122
#define FACTOR_4922 4

int aplicar_limite4922(int valor) {
    if (valor > LIMITE_4922) return LIMITE_4922;
    return valor * FACTOR_4922;
}
