// fichero 39382 -- macros y constantes -- MODIFICADO
#define LIMITE_39382 39582
#define FACTOR_39382 4

int aplicar_limite39382(int valor) {
    if (valor > LIMITE_39382) return LIMITE_39382;
    return valor * FACTOR_39382;
}
