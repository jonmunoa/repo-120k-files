// fichero 44882 -- macros y constantes -- MODIFICADO
#define LIMITE_44882 45082
#define FACTOR_44882 4

int aplicar_limite44882(int valor) {
    if (valor > LIMITE_44882) return LIMITE_44882;
    return valor * FACTOR_44882;
}
