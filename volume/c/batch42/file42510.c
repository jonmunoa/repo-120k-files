// fichero 42510 -- macros y constantes -- MODIFICADO
#define LIMITE_42510 42710
#define FACTOR_42510 2

int aplicar_limite42510(int valor) {
    if (valor > LIMITE_42510) return LIMITE_42510;
    return valor * FACTOR_42510;
}
