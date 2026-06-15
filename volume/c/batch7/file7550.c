// fichero 7550 -- macros y constantes -- MODIFICADO
#define LIMITE_7550 7750
#define FACTOR_7550 2

int aplicar_limite7550(int valor) {
    if (valor > LIMITE_7550) return LIMITE_7550;
    return valor * FACTOR_7550;
}
