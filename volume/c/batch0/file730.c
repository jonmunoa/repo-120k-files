// fichero 730 -- macros y constantes -- MODIFICADO
#define LIMITE_730 930
#define FACTOR_730 2

int aplicar_limite730(int valor) {
    if (valor > LIMITE_730) return LIMITE_730;
    return valor * FACTOR_730;
}
