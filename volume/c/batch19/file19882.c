// fichero 19882 -- macros y constantes -- MODIFICADO
#define LIMITE_19882 20082
#define FACTOR_19882 4

int aplicar_limite19882(int valor) {
    if (valor > LIMITE_19882) return LIMITE_19882;
    return valor * FACTOR_19882;
}
