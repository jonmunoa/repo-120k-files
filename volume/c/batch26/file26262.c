// fichero 26262 -- macros y constantes -- MODIFICADO
#define LIMITE_26262 26462
#define FACTOR_26262 4

int aplicar_limite26262(int valor) {
    if (valor > LIMITE_26262) return LIMITE_26262;
    return valor * FACTOR_26262;
}
