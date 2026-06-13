// fichero 40270 -- macros y constantes
#define LIMITE_40270 40370
#define FACTOR_40270 1

int aplicar_limite40270(int valor) {
    if (valor > LIMITE_40270) return LIMITE_40270;
    return valor * FACTOR_40270;
}
