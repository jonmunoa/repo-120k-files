// fichero 17438 -- macros y constantes -- MODIFICADO
#define LIMITE_17438 17638
#define FACTOR_17438 5

int aplicar_limite17438(int valor) {
    if (valor > LIMITE_17438) return LIMITE_17438;
    return valor * FACTOR_17438;
}
