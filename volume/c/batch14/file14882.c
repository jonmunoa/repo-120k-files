// fichero 14882 -- macros y constantes -- MODIFICADO
#define LIMITE_14882 15082
#define FACTOR_14882 4

int aplicar_limite14882(int valor) {
    if (valor > LIMITE_14882) return LIMITE_14882;
    return valor * FACTOR_14882;
}
