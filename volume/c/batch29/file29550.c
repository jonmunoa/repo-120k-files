// fichero 29550 -- macros y constantes
#define LIMITE_29550 29650
#define FACTOR_29550 1

int aplicar_limite29550(int valor) {
    if (valor > LIMITE_29550) return LIMITE_29550;
    return valor * FACTOR_29550;
}
