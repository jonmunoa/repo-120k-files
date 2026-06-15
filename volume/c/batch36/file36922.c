// fichero 36922 -- macros y constantes -- MODIFICADO
#define LIMITE_36922 37122
#define FACTOR_36922 4

int aplicar_limite36922(int valor) {
    if (valor > LIMITE_36922) return LIMITE_36922;
    return valor * FACTOR_36922;
}
