// fichero 23922 -- macros y constantes -- MODIFICADO
#define LIMITE_23922 24122
#define FACTOR_23922 4

int aplicar_limite23922(int valor) {
    if (valor > LIMITE_23922) return LIMITE_23922;
    return valor * FACTOR_23922;
}
