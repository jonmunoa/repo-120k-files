// fichero 17646 -- macros y constantes -- MODIFICADO
#define LIMITE_17646 17846
#define FACTOR_17646 3

int aplicar_limite17646(int valor) {
    if (valor > LIMITE_17646) return LIMITE_17646;
    return valor * FACTOR_17646;
}
