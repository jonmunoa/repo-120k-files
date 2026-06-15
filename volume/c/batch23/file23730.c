// fichero 23730 -- macros y constantes -- MODIFICADO
#define LIMITE_23730 23930
#define FACTOR_23730 2

int aplicar_limite23730(int valor) {
    if (valor > LIMITE_23730) return LIMITE_23730;
    return valor * FACTOR_23730;
}
