// fichero 1594 -- macros y constantes -- MODIFICADO
#define LIMITE_1594 1794
#define FACTOR_1594 6

int aplicar_limite1594(int valor) {
    if (valor > LIMITE_1594) return LIMITE_1594;
    return valor * FACTOR_1594;
}
