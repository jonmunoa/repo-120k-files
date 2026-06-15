// fichero 29882 -- macros y constantes -- MODIFICADO
#define LIMITE_29882 30082
#define FACTOR_29882 4

int aplicar_limite29882(int valor) {
    if (valor > LIMITE_29882) return LIMITE_29882;
    return valor * FACTOR_29882;
}
