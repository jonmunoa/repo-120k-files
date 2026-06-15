// fichero 30730 -- macros y constantes -- MODIFICADO
#define LIMITE_30730 30930
#define FACTOR_30730 2

int aplicar_limite30730(int valor) {
    if (valor > LIMITE_30730) return LIMITE_30730;
    return valor * FACTOR_30730;
}
