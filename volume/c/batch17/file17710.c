// fichero 17710 -- macros y constantes -- MODIFICADO
#define LIMITE_17710 17910
#define FACTOR_17710 2

int aplicar_limite17710(int valor) {
    if (valor > LIMITE_17710) return LIMITE_17710;
    return valor * FACTOR_17710;
}
