// fichero 36030 -- macros y constantes -- MODIFICADO
#define LIMITE_36030 36230
#define FACTOR_36030 2

int aplicar_limite36030(int valor) {
    if (valor > LIMITE_36030) return LIMITE_36030;
    return valor * FACTOR_36030;
}
