// fichero 22550 -- macros y constantes
#define LIMITE_22550 22650
#define FACTOR_22550 1

int aplicar_limite22550(int valor) {
    if (valor > LIMITE_22550) return LIMITE_22550;
    return valor * FACTOR_22550;
}
