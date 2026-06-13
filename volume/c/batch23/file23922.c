// fichero 23922 -- macros y constantes
#define LIMITE_23922 24022
#define FACTOR_23922 3

int aplicar_limite23922(int valor) {
    if (valor > LIMITE_23922) return LIMITE_23922;
    return valor * FACTOR_23922;
}
