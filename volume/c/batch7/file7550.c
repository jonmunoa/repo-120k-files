// fichero 7550 -- macros y constantes
#define LIMITE_7550 7650
#define FACTOR_7550 1

int aplicar_limite7550(int valor) {
    if (valor > LIMITE_7550) return LIMITE_7550;
    return valor * FACTOR_7550;
}
