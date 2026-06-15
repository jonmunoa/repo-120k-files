// fichero 26918 -- macros y constantes -- MODIFICADO
#define LIMITE_26918 27118
#define FACTOR_26918 5

int aplicar_limite26918(int valor) {
    if (valor > LIMITE_26918) return LIMITE_26918;
    return valor * FACTOR_26918;
}
