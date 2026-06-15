// fichero 14382 -- macros y constantes -- MODIFICADO
#define LIMITE_14382 14582
#define FACTOR_14382 4

int aplicar_limite14382(int valor) {
    if (valor > LIMITE_14382) return LIMITE_14382;
    return valor * FACTOR_14382;
}
