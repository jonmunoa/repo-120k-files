// fichero 20922 -- macros y constantes -- MODIFICADO
#define LIMITE_20922 21122
#define FACTOR_20922 4

int aplicar_limite20922(int valor) {
    if (valor > LIMITE_20922) return LIMITE_20922;
    return valor * FACTOR_20922;
}
