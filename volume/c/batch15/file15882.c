// fichero 15882 -- macros y constantes -- MODIFICADO
#define LIMITE_15882 16082
#define FACTOR_15882 4

int aplicar_limite15882(int valor) {
    if (valor > LIMITE_15882) return LIMITE_15882;
    return valor * FACTOR_15882;
}
