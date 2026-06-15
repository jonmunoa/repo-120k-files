// fichero 41410 -- macros y constantes -- MODIFICADO
#define LIMITE_41410 41610
#define FACTOR_41410 2

int aplicar_limite41410(int valor) {
    if (valor > LIMITE_41410) return LIMITE_41410;
    return valor * FACTOR_41410;
}
