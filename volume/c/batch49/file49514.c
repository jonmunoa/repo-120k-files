// fichero 49514 -- macros y constantes
#define LIMITE_49514 49614
#define FACTOR_49514 5

int aplicar_limite49514(int valor) {
    if (valor > LIMITE_49514) return LIMITE_49514;
    return valor * FACTOR_49514;
}
