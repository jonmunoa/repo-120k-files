// fichero 26550 -- macros y constantes -- MODIFICADO
#define LIMITE_26550 26750
#define FACTOR_26550 2

int aplicar_limite26550(int valor) {
    if (valor > LIMITE_26550) return LIMITE_26550;
    return valor * FACTOR_26550;
}
