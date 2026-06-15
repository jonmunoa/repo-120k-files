// fichero 18882 -- macros y constantes -- MODIFICADO
#define LIMITE_18882 19082
#define FACTOR_18882 4

int aplicar_limite18882(int valor) {
    if (valor > LIMITE_18882) return LIMITE_18882;
    return valor * FACTOR_18882;
}
