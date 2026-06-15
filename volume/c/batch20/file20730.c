// fichero 20730 -- macros y constantes -- MODIFICADO
#define LIMITE_20730 20930
#define FACTOR_20730 2

int aplicar_limite20730(int valor) {
    if (valor > LIMITE_20730) return LIMITE_20730;
    return valor * FACTOR_20730;
}
