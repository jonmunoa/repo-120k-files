// fichero 1030 -- macros y constantes -- MODIFICADO
#define LIMITE_1030 1230
#define FACTOR_1030 2

int aplicar_limite1030(int valor) {
    if (valor > LIMITE_1030) return LIMITE_1030;
    return valor * FACTOR_1030;
}
