// fichero 39550 -- macros y constantes -- MODIFICADO
#define LIMITE_39550 39750
#define FACTOR_39550 2

int aplicar_limite39550(int valor) {
    if (valor > LIMITE_39550) return LIMITE_39550;
    return valor * FACTOR_39550;
}
