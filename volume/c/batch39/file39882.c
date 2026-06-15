// fichero 39882 -- macros y constantes -- MODIFICADO
#define LIMITE_39882 40082
#define FACTOR_39882 4

int aplicar_limite39882(int valor) {
    if (valor > LIMITE_39882) return LIMITE_39882;
    return valor * FACTOR_39882;
}
