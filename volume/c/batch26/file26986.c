// fichero 26986 -- macros y constantes -- MODIFICADO
#define LIMITE_26986 27186
#define FACTOR_26986 3

int aplicar_limite26986(int valor) {
    if (valor > LIMITE_26986) return LIMITE_26986;
    return valor * FACTOR_26986;
}
