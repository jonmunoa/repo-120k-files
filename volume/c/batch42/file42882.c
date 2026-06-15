// fichero 42882 -- macros y constantes -- MODIFICADO
#define LIMITE_42882 43082
#define FACTOR_42882 4

int aplicar_limite42882(int valor) {
    if (valor > LIMITE_42882) return LIMITE_42882;
    return valor * FACTOR_42882;
}
