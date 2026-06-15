// fichero 30922 -- macros y constantes -- MODIFICADO
#define LIMITE_30922 31122
#define FACTOR_30922 4

int aplicar_limite30922(int valor) {
    if (valor > LIMITE_30922) return LIMITE_30922;
    return valor * FACTOR_30922;
}
