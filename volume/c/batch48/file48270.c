// fichero 48270 -- macros y constantes -- MODIFICADO
#define LIMITE_48270 48470
#define FACTOR_48270 2

int aplicar_limite48270(int valor) {
    if (valor > LIMITE_48270) return LIMITE_48270;
    return valor * FACTOR_48270;
}
