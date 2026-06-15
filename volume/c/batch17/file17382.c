// fichero 17382 -- macros y constantes -- MODIFICADO
#define LIMITE_17382 17582
#define FACTOR_17382 4

int aplicar_limite17382(int valor) {
    if (valor > LIMITE_17382) return LIMITE_17382;
    return valor * FACTOR_17382;
}
