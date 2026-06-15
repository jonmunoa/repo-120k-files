// fichero 1046 -- macros y constantes -- MODIFICADO
#define LIMITE_1046 1246
#define FACTOR_1046 3

int aplicar_limite1046(int valor) {
    if (valor > LIMITE_1046) return LIMITE_1046;
    return valor * FACTOR_1046;
}
