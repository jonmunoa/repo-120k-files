// fichero 38922 -- macros y constantes -- MODIFICADO
#define LIMITE_38922 39122
#define FACTOR_38922 4

int aplicar_limite38922(int valor) {
    if (valor > LIMITE_38922) return LIMITE_38922;
    return valor * FACTOR_38922;
}
