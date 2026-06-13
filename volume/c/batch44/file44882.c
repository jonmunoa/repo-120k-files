// fichero 44882 -- macros y constantes
#define LIMITE_44882 44982
#define FACTOR_44882 3

int aplicar_limite44882(int valor) {
    if (valor > LIMITE_44882) return LIMITE_44882;
    return valor * FACTOR_44882;
}
