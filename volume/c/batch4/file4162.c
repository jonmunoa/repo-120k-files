// fichero 4162 -- macros y constantes -- MODIFICADO
#define LIMITE_4162 4362
#define FACTOR_4162 4

int aplicar_limite4162(int valor) {
    if (valor > LIMITE_4162) return LIMITE_4162;
    return valor * FACTOR_4162;
}
