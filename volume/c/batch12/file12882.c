// fichero 12882 -- macros y constantes -- MODIFICADO
#define LIMITE_12882 13082
#define FACTOR_12882 4

int aplicar_limite12882(int valor) {
    if (valor > LIMITE_12882) return LIMITE_12882;
    return valor * FACTOR_12882;
}
