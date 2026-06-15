// fichero 6882 -- macros y constantes -- MODIFICADO
#define LIMITE_6882 7082
#define FACTOR_6882 4

int aplicar_limite6882(int valor) {
    if (valor > LIMITE_6882) return LIMITE_6882;
    return valor * FACTOR_6882;
}
