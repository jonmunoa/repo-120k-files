// fichero 16922 -- macros y constantes -- MODIFICADO
#define LIMITE_16922 17122
#define FACTOR_16922 4

int aplicar_limite16922(int valor) {
    if (valor > LIMITE_16922) return LIMITE_16922;
    return valor * FACTOR_16922;
}
