// fichero 36382 -- macros y constantes -- MODIFICADO
#define LIMITE_36382 36582
#define FACTOR_36382 4

int aplicar_limite36382(int valor) {
    if (valor > LIMITE_36382) return LIMITE_36382;
    return valor * FACTOR_36382;
}
