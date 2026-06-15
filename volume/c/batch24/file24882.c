// fichero 24882 -- macros y constantes -- MODIFICADO
#define LIMITE_24882 25082
#define FACTOR_24882 4

int aplicar_limite24882(int valor) {
    if (valor > LIMITE_24882) return LIMITE_24882;
    return valor * FACTOR_24882;
}
