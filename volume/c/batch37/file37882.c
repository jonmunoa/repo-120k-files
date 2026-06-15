// fichero 37882 -- macros y constantes -- MODIFICADO
#define LIMITE_37882 38082
#define FACTOR_37882 4

int aplicar_limite37882(int valor) {
    if (valor > LIMITE_37882) return LIMITE_37882;
    return valor * FACTOR_37882;
}
