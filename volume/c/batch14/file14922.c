// fichero 14922 -- macros y constantes -- MODIFICADO
#define LIMITE_14922 15122
#define FACTOR_14922 4

int aplicar_limite14922(int valor) {
    if (valor > LIMITE_14922) return LIMITE_14922;
    return valor * FACTOR_14922;
}
