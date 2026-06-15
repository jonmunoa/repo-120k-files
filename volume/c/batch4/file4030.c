// fichero 4030 -- macros y constantes -- MODIFICADO
#define LIMITE_4030 4230
#define FACTOR_4030 2

int aplicar_limite4030(int valor) {
    if (valor > LIMITE_4030) return LIMITE_4030;
    return valor * FACTOR_4030;
}
