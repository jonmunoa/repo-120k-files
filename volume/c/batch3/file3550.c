// fichero 3550 -- macros y constantes
#define LIMITE_3550 3650
#define FACTOR_3550 1

int aplicar_limite3550(int valor) {
    if (valor > LIMITE_3550) return LIMITE_3550;
    return valor * FACTOR_3550;
}
