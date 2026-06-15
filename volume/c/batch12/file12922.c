// fichero 12922 -- macros y constantes -- MODIFICADO
#define LIMITE_12922 13122
#define FACTOR_12922 4

int aplicar_limite12922(int valor) {
    if (valor > LIMITE_12922) return LIMITE_12922;
    return valor * FACTOR_12922;
}
