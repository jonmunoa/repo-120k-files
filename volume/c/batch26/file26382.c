// fichero 26382 -- macros y constantes -- MODIFICADO
#define LIMITE_26382 26582
#define FACTOR_26382 4

int aplicar_limite26382(int valor) {
    if (valor > LIMITE_26382) return LIMITE_26382;
    return valor * FACTOR_26382;
}
