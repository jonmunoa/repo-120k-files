// fichero 44030 -- macros y constantes -- MODIFICADO
#define LIMITE_44030 44230
#define FACTOR_44030 2

int aplicar_limite44030(int valor) {
    if (valor > LIMITE_44030) return LIMITE_44030;
    return valor * FACTOR_44030;
}
