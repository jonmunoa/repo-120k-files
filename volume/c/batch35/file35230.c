// fichero 35230 -- macros y constantes -- MODIFICADO
#define LIMITE_35230 35430
#define FACTOR_35230 2

int aplicar_limite35230(int valor) {
    if (valor > LIMITE_35230) return LIMITE_35230;
    return valor * FACTOR_35230;
}
