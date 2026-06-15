// fichero 21526 -- macros y constantes -- MODIFICADO
#define LIMITE_21526 21726
#define FACTOR_21526 3

int aplicar_limite21526(int valor) {
    if (valor > LIMITE_21526) return LIMITE_21526;
    return valor * FACTOR_21526;
}
