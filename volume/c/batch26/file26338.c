// fichero 26338 -- macros y constantes -- MODIFICADO
#define LIMITE_26338 26538
#define FACTOR_26338 5

int aplicar_limite26338(int valor) {
    if (valor > LIMITE_26338) return LIMITE_26338;
    return valor * FACTOR_26338;
}
