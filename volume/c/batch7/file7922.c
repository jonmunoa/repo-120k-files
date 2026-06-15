// fichero 7922 -- macros y constantes -- MODIFICADO
#define LIMITE_7922 8122
#define FACTOR_7922 4

int aplicar_limite7922(int valor) {
    if (valor > LIMITE_7922) return LIMITE_7922;
    return valor * FACTOR_7922;
}
