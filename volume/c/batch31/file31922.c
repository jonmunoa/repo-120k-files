// fichero 31922 -- macros y constantes
#define LIMITE_31922 32022
#define FACTOR_31922 3

int aplicar_limite31922(int valor) {
    if (valor > LIMITE_31922) return LIMITE_31922;
    return valor * FACTOR_31922;
}
