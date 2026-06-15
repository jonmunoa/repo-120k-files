// fichero 31282 -- macros y constantes -- MODIFICADO
#define LIMITE_31282 31482
#define FACTOR_31282 4

int aplicar_limite31282(int valor) {
    if (valor > LIMITE_31282) return LIMITE_31282;
    return valor * FACTOR_31282;
}
