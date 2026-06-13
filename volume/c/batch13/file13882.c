// fichero 13882 -- macros y constantes
#define LIMITE_13882 13982
#define FACTOR_13882 3

int aplicar_limite13882(int valor) {
    if (valor > LIMITE_13882) return LIMITE_13882;
    return valor * FACTOR_13882;
}
