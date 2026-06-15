// fichero 22882 -- macros y constantes -- MODIFICADO
#define LIMITE_22882 23082
#define FACTOR_22882 4

int aplicar_limite22882(int valor) {
    if (valor > LIMITE_22882) return LIMITE_22882;
    return valor * FACTOR_22882;
}
