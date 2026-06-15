// fichero 13882 -- macros y constantes -- MODIFICADO
#define LIMITE_13882 14082
#define FACTOR_13882 4

int aplicar_limite13882(int valor) {
    if (valor > LIMITE_13882) return LIMITE_13882;
    return valor * FACTOR_13882;
}
