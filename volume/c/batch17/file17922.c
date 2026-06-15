// fichero 17922 -- macros y constantes -- MODIFICADO
#define LIMITE_17922 18122
#define FACTOR_17922 4

int aplicar_limite17922(int valor) {
    if (valor > LIMITE_17922) return LIMITE_17922;
    return valor * FACTOR_17922;
}
