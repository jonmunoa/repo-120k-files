// fichero 26230 -- macros y constantes -- MODIFICADO
#define LIMITE_26230 26430
#define FACTOR_26230 2

int aplicar_limite26230(int valor) {
    if (valor > LIMITE_26230) return LIMITE_26230;
    return valor * FACTOR_26230;
}
