// fichero 36882 -- macros y constantes -- MODIFICADO
#define LIMITE_36882 37082
#define FACTOR_36882 4

int aplicar_limite36882(int valor) {
    if (valor > LIMITE_36882) return LIMITE_36882;
    return valor * FACTOR_36882;
}
