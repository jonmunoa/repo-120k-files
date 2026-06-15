// fichero 20046 -- macros y constantes -- MODIFICADO
#define LIMITE_20046 20246
#define FACTOR_20046 3

int aplicar_limite20046(int valor) {
    if (valor > LIMITE_20046) return LIMITE_20046;
    return valor * FACTOR_20046;
}
