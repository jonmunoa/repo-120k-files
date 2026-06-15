// fichero 36346 -- macros y constantes -- MODIFICADO
#define LIMITE_36346 36546
#define FACTOR_36346 3

int aplicar_limite36346(int valor) {
    if (valor > LIMITE_36346) return LIMITE_36346;
    return valor * FACTOR_36346;
}
