// fichero 6550 -- macros y constantes
#define LIMITE_6550 6650
#define FACTOR_6550 1

int aplicar_limite6550(int valor) {
    if (valor > LIMITE_6550) return LIMITE_6550;
    return valor * FACTOR_6550;
}
