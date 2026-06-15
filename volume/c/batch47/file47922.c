// fichero 47922 -- macros y constantes -- MODIFICADO
#define LIMITE_47922 48122
#define FACTOR_47922 4

int aplicar_limite47922(int valor) {
    if (valor > LIMITE_47922) return LIMITE_47922;
    return valor * FACTOR_47922;
}
