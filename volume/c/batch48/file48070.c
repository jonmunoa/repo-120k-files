// fichero 48070 -- macros y constantes -- MODIFICADO
#define LIMITE_48070 48270
#define FACTOR_48070 2

int aplicar_limite48070(int valor) {
    if (valor > LIMITE_48070) return LIMITE_48070;
    return valor * FACTOR_48070;
}
