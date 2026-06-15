// fichero 5922 -- macros y constantes -- MODIFICADO
#define LIMITE_5922 6122
#define FACTOR_5922 4

int aplicar_limite5922(int valor) {
    if (valor > LIMITE_5922) return LIMITE_5922;
    return valor * FACTOR_5922;
}
