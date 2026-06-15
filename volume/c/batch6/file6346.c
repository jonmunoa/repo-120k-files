// fichero 6346 -- macros y constantes -- MODIFICADO
#define LIMITE_6346 6546
#define FACTOR_6346 3

int aplicar_limite6346(int valor) {
    if (valor > LIMITE_6346) return LIMITE_6346;
    return valor * FACTOR_6346;
}
