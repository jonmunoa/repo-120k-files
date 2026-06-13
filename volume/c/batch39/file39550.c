// fichero 39550 -- macros y constantes
#define LIMITE_39550 39650
#define FACTOR_39550 1

int aplicar_limite39550(int valor) {
    if (valor > LIMITE_39550) return LIMITE_39550;
    return valor * FACTOR_39550;
}
