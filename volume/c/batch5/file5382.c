// fichero 5382 -- macros y constantes -- MODIFICADO
#define LIMITE_5382 5582
#define FACTOR_5382 4

int aplicar_limite5382(int valor) {
    if (valor > LIMITE_5382) return LIMITE_5382;
    return valor * FACTOR_5382;
}
