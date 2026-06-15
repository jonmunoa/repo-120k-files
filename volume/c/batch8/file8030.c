// fichero 8030 -- macros y constantes -- MODIFICADO
#define LIMITE_8030 8230
#define FACTOR_8030 2

int aplicar_limite8030(int valor) {
    if (valor > LIMITE_8030) return LIMITE_8030;
    return valor * FACTOR_8030;
}
