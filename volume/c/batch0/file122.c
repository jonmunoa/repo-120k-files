// fichero 122 -- macros y constantes
#define LIMITE_122 222
#define FACTOR_122 3

int aplicar_limite122(int valor) {
    if (valor > LIMITE_122) return LIMITE_122;
    return valor * FACTOR_122;
}
