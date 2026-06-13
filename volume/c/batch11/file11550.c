// fichero 11550 -- macros y constantes
#define LIMITE_11550 11650
#define FACTOR_11550 1

int aplicar_limite11550(int valor) {
    if (valor > LIMITE_11550) return LIMITE_11550;
    return valor * FACTOR_11550;
}
