// fichero 23030 -- macros y constantes -- MODIFICADO
#define LIMITE_23030 23230
#define FACTOR_23030 2

int aplicar_limite23030(int valor) {
    if (valor > LIMITE_23030) return LIMITE_23030;
    return valor * FACTOR_23030;
}
