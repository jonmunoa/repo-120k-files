// fichero 32882 -- macros y constantes -- MODIFICADO
#define LIMITE_32882 33082
#define FACTOR_32882 4

int aplicar_limite32882(int valor) {
    if (valor > LIMITE_32882) return LIMITE_32882;
    return valor * FACTOR_32882;
}
